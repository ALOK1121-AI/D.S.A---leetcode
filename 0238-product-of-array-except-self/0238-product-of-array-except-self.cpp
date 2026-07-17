class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int prod1 = 1;
        int prod2 = 1;
        int j = 0;
        int k = 0;
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {

            prod *= nums[i];
        }
        while (j < n and k < n) {
            if (nums[k] != 0) {
                ans[j] = prod / nums[k];
            }
            else {
                for (int c = 0; c < k ; c++) {
                    prod1 *= nums[c];
                }
                for (int d = n - 1; d > k ; d--) {
                    prod2 *= nums[d];
                }
                ans[j] = prod1 * prod2;
            }
            j++;
            k++;
        }
        return ans;
    }
};