class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // make adjacency list
        vector<vector<int>> aList(numCourses);
        for (auto& p : prerequisites)
            aList[p[1]].push_back(p[0]);

        // make in-degree
        vector<int> iDegree(numCourses, 0);
        for (auto& c : aList)
            for (int nxt : c)
                iDegree[nxt]++;

        // add indegree == 0 to queue
        queue<int> q;
        for (int i = 0; i < numCourses; ++i)
            if (iDegree[i] == 0)
                q.push(i);

        // process queue
        vector<int> ans;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            ans.push_back(cur);
            for (int nxt : aList[cur]) {
                if (--iDegree[nxt] == 0)
                    q.push(nxt);
            }
        }

        // if we couldn't visit all courses, there's a cycle -> no valid order
        return ans.size() == numCourses ? ans : vector<int>();
    }
};