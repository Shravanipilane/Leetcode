class solution 
{
    public:
    int organesRotting(vector<vector<int>>& grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;

        int fresh = 0;

        for(int r=0;r<rows;r++)
        {
            for(int c=0;c<cols;c++)
            {
                if(grid[r][c] == 1)
                {
                    fresh++;
                }
                else if(grid[r][c] == 2)
                {
                    q.push({r, c});
                }
            }
        }

        if(fresh == 0)
            return 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int time = 0;
        while(!q.empty())
        {
            int sz = q.size();
            bool rottedThisRound = false;

            while(sz > 0)
            {
                auto [r, c] = q.front();
                q.pop();
                sz--;

                for(int k=0;k<4;k++)
                {
                    int nr = r + dr[k];
                    int nc = c + dc[k];

                    if(nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1)
                    {
                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                        fresh--;
                        rottedThisRound = true;
                    }
                }
            }
            if(rottedThisRound)
                time++;
        }

        return fresh == 0 ? time : -1;
    }

};