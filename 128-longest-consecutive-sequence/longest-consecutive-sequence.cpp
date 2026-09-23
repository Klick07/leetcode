class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        sort(nums.begin(), nums.end());
        int currentLength = 1;
        int bestLength = 1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }

            if (nums[i] == nums[i - 1] + 1) {
                ++currentLength;
            } else {
                currentLength = 1;
            }

            bestLength = max(bestLength, currentLength);
        }

        return bestLength;
    }
};