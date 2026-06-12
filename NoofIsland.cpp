class solution
{
    public:
    void markAllConnected(vector<vector<char>>& grid, int r, int c)
    {
        int rows = grid.size();
        int cols = grid[0].size();

        queue<pair<int, int>> q;
        q.push({r, c});
        grid[r][c] = '0'; 

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        while(!q.empty())
        {
            auto [currR, currC] = q.front();
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nc >= 0 && nr < rows && nc < cols && )
                {
                    if(grid[nr][nc] == '1')
                    {
                        q.push({nr, nc});
                        grid[nr][nc] = '0'; 
                    }
                }
            }
        }
    }
}
int numIslands(vector<vector<char>>& grid)
{
    int rows = grid.size();
    int cols = grid[0].size();
    int island = 0;
 
    for(int r=0;r<rows;r++)
    {
        for(int c=0;c<cols;c++)
        {
            if(grid[r][c] == '1')
            {
                if(grid[r][c] == '1')
                {
                    island++;
                    markAllConnected(grid, r, c);
                }
            }
        }
    }
    return island;
}