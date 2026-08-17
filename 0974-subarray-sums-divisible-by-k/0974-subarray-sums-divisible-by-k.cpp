class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>f;
        f[0]=1;
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            int que=sum%k;
             if(que<0) que=que+k;
             res=res+f[que];
             f[que]++;
                     }
        return res;
    }
};