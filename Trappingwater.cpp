class Solution {
public:
    int trap(vector<int>& height)
    {
        int water = 0;
        int sz = height.size();
        for(int i=0;i<sz;i++)
        {
            int lftMax = 0, rgtMax = 0;
            for(int j=i;j>=0;j--)
            {
                lftMax = max(lftMax, height[j]);
            }
            for(int j=i;j<sz;j++)
            {
                rgtMax = max(rgtMax, height[j]);
            }
            water += min(lftMax, rgtMax) - height[i];
        }
        return water;
    }
};