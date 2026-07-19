class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        if (k < 0)
            return 0;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0, j = 1;
        int count = 0;

        while (j < n) {

            if (i == j) {
                j++;
            } else {
                int diff = nums[j] - nums[i];

                if (diff < k) {
                    j++;
                } else if (diff > k) {
                    i++;
                } else {
                    count++;
                    i++;
                    j++;

                    while (i < n && nums[i] == nums[i - 1])
                        i++;

                    while (j < n && nums[j] == nums[j - 1])
                        j++;
                }
            }
        }

        return count;
    }
};