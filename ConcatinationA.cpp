int sz = nums.Size();
vector<int>ans(2 * sz);

for(i=0;i<sz;i++)
{
    ans[i] = nums[i];
    ans[i + sz] = nums[i];
} 
return ans;
