class Solution {
public:
    bool canSplit(vector<int>& nums, int x, int k) {
        int numP = 1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > x) {
                numP++;
                sum = nums[i];

                if (numP > k)
                    return false;
            } else {
                sum += nums[i];
            }
        }

        return numP <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int lo = 0, hi = 0;

        // Compute search range
        for (int i = 0; i < nums.size(); i++) {
            lo = max(lo, nums[i]);
            hi += nums[i];
        }

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;

            if (canSplit(nums, mid, k))
                hi = mid;
            else
                lo = mid + 1;
        }

        return lo;
    }
};