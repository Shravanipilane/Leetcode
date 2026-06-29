class solution
{
    public:
    int findKthlargest(vector<int>& nums, int k)
    {
        priority_queue<int> heap(nums.begin(), nums.end());

        int n = nums.size();
        if(n < k)
           return 0;
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = heap.top();
            heap.pop;
        }
    
        return ans;
    }
};