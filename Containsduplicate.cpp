class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            if(mp.find(nums[i]) != mp.end())
            {
                return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};


// unordered_set → hash table that stores just keys (no value attached)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;
        for(int i=0; i<n; i++)
        {
            if(seen.count(nums[i]))
            {
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};