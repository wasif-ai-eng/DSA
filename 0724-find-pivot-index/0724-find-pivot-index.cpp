class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum=0,prev=0;

        for(int i=0;i<nums.size();i++)
        {
             sum+=nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            if(prev==sum-nums[i])
            return i;

            sum-=nums[i];
            prev+=nums[i];
        }
        return -1;
    }
};