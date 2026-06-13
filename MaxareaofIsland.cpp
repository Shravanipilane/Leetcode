int getArea(vector<vector<int>>& grid, int r , int c)
{
    int rows = grid.size();
    int cols = grid[0].size();

    queue<pair<int, int>> q;
    q.push({r, c});
    grid[r][c] = 0;

    int area = 1;
    while(!q.empty())
    {
        auto[r1,c1] = q.front();
        q.pop();

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        for(int k=0;k<4;k++)
        {
            int nr = r1 + dr[k];
            int nc = c1 + dc[k];

            if(nr >= 0 && nc >= 0 && nr < rows && nc < cols)
            {
                if(grid[nr][nc] == 1)
                {
                    q.push({nr,nc});
                    grid[nr][nc] = 0 ;
                    area ++;
                }
            }
        }
    }
    return area;
}
int maxAreaOfIsland(vector<vector<intr>>& grid)
{
    int rows = grid.size();
    int cols = grid[0].size();

    int maxArea = 0;
    for(int r = 0; r<rows; r++)
    {
        for(int c = 0; c<cols; c++)
        {
            if(grid[r][c] == 1)
            {
                int area = getArea(grid,r,c);
                int maxArea = max(maxarea, area);
            }

        }
    }
    return maxArea;
} 