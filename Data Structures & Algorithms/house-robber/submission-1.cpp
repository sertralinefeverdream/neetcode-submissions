class Solution {
public:
    int rob_max(std::vector<int>& nums, int index, std::unordered_map<int, int>& memo) {
        if (index >= nums.size()) {
            return 0;
        }

        if (memo.count(index) == 0) {
            memo[index] = std::max(rob_max(nums, index+1, memo), nums[index] + rob_max(nums, index+2, memo));
        }

        return memo[index];
    }

    int rob(vector<int>& nums) {
        std::unordered_map<int, int> memo{};
        return rob_max(nums, 0, memo);
    }
};
