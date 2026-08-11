class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int bv1=nums[0];
        int bv2=nums[0];
        int v1 = nums[0];
        int v2 = nums[0];
        int ts = nums[0];

        for (int i = 1; i < n; i++) {
            ts += nums[i];
            bv1=max(nums[i],bv1+nums[i]);
            v1=max(v1,bv1);
        }

        for (int i = 1; i < n; i++) {
             bv2=min(nums[i],bv2+nums[i]);
            v2=min(v2,bv2);
        }

        // All elements are negative
        if (v1 < 0) {
            return v1;
        }

        return max(v1, ts - v2);
    }
};