// Input = nums = [1,1,0,1,1,1]
// Ouput = 3

class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        int cnt = 0;
        int ans = 0;

    for(int i=0;i<n;i++)
    {
        if(nums[i] == 1)
        {
            cnt++; 
            ans = max(ans, cnt);
        }
        else
        {
            cnt = 0;
        }
    }  
    return ans;
    }
};



int cnt = 0;
int ans = 0;
for(int i=0;i<n;i++)
{
    if(nums[i] == 1)
    {
        cnt++;
        ans = max(ans, cnt);
    }
    else
    {
        cnt = 0;
    }
}
return ans;

int n = nums.size();
int cnt = 0;
int ans = 0;

for(i=0;i<n;i++)
{
    if(nums[i] == 1)
    {
        cnt++;
        ans = max(ans, cnt);
    }
    else
    {
        cnt = 0;
    }
}
return ans;



int n = nums.size();
int cnt = 0 ;
int cnt = 0;
for(i=0;i<n;i++)
{
    if(nums[i] == 1)
    {
        cnt++;
        ans = max(ans, cnt);
    }
    else{
        cnt = 0;
    }

}
