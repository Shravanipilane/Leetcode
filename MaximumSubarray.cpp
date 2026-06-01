class solution
{
 public:
    int maxSubArray(vector<int>& nums)
    {
        int n = nums.size();
        int maxSum = 0;
        for(int st=0; st<n; st++)
        {
            int currSum = 0;
            for(int end=st; end<n; end++)
            {
                currSum += nums[end];
                maxSum = max(currSum, maxSum);
            }
        }
        return maxSum;
    }
};