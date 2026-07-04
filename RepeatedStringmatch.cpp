class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int na = a.size(), nb = b.size();
        string s = "";
        int cnt = 0;
        while (s.size() < a.size() + b.size()) {
            s += a;
            cnt++;
            if (s.find(b) != string::npos)
                return cnt;
        }
        return -1;
    }
};