class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            if (nums[i] == 0) {
                i++;
            } else if (nums[j] == 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
                i++;
            } else {
                j--;
            }
        }
        
        j = nums.size() - 1;
        while (i < j) {
            if (nums[i] == 1 || nums[i] == 0) {
                i++;
            } else if (nums[j] == 1) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
                i++;
            } else {
                j--;
            }
        }
    }
};