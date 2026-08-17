class Solution {
public:

    int prefix(vector<int>& arr, int i) {
        if (i == 0)
            return 0;

        return prefix(arr, i - 1) + arr[i - 1];
    }

    int suffix(vector<int>& arr, int i, int n) {
        if (i == n - 1)
            return 0;

        return suffix(arr, i + 1, n) + arr[i + 1];
    }

    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int left = prefix(nums, i);
            int right = suffix(nums, i, n);

            if (left == right)
                return i;
        }

        return -1;
    }
};