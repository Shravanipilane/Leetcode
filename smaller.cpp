class Solution
{
    public:
     vector<int>smallerNumbersThanCurrent(vector<int>& nums)
     {
        int sz = nums.Size();
        vector<int>ans;
        for(int i=0;i<sz;i++)
        {
            int cnt = 0;
            for(int j=0;j<sz;j++)
            {
                if(j != i && nums[j] < nums[i])
                {
                    cnt++;  
                }
            }
            ans[i] = cnt;
        }
      return ans;
     }
}

