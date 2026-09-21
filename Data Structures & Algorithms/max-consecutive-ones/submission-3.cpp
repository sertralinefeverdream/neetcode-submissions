class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count{0};
        int curr_count{0};

        for (const auto& num : nums) {
            if (num == 0) {
                max_count = max(max_count, curr_count);
                curr_count = 0;
            } else {
                curr_count++;
            }
        }

        return max(max_count, curr_count);
    }
};