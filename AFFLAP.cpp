class Solution {
public:
    queue<pair<int,int>> q;

    void addAllLandCells(vector<vector<int>>& grid, int rows, int cols) {
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1) {
                    q.push({r, c});
                }
            }
        }
    }

    int maxDistance(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        addAllLandCells(grid, rows, cols);

        if (q.empty() || q.size() == (size_t)rows * cols) return -1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int dist = -1;

        while (!q.empty()) {
            int sz = q.size();
            dist++;

            for (int k = 0; k < sz; k++) {
                auto [r, c] = q.front();
                q.pop();

                for (int d = 0; d < 4; d++) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];

                    if (nr >= 0 && nc >= 0 && nr < rows && nc < cols) {
                        if (grid[nr][nc] == 0) {
                            grid[nr][nc] = 1;
                            q.push({nr, nc});
                        }
                    }
                }
            }
        }

        return dist;
    }
};