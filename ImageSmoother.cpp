// only workd gor 3x3 matrix
int rI = 1, cI = 1;
int sum = 0;
for(int i=rI-1;i<=rI+1;i++)
{
    for(int j=cI-1;j<=cI+1;j++)
    {
        sum = sum + M[i][j];
    }
}
sum = sum / 9;
return sum;


class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) 
    {
        int rows = img.size();        
        int cols = img[0].size();    
        
        vector<vector<int>> result(rows, vector<int>(cols, 0));
        
        for(int rI = 0; rI < rows; rI++)
        {
            for(int cI = 0; cI < cols; cI++)
            {
                int cnt = 0;
                int sum = 0;
                int SR = (rI == 0)      ? 0  : rI-1;
                int ER = (rI == rows-1) ? rI : rI+1;
                int SC = (cI == 0)      ? 0  : cI-1;
                int EC = (cI == cols-1) ? cI : cI+1;
                
                for(int i = SR; i <= ER; i++)
                {
                    for(int j = SC; j <= EC; j++)  
                    {
                        sum += img[i][j];   
                        cnt++;
                    }
                }
                result[rI][cI] = sum/cnt;   
            } 
        }
        return result;   
    }
};