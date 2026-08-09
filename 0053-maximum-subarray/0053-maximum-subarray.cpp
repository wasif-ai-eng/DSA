class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int bestans=nums[0];
        for(int i=1;i<n;i++){
            int v1=bestans+nums[i];
            int v2=nums[i];
            bestans=max(v1,v2);
            ans=max(ans,bestans);
        }
        return ans;
    }
};