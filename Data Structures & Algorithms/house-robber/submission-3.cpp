class Solution {
public:
    int rob_max(std::vector<int>& nums, int index, std::vector<int> memo) {
        if (index >= nums.size()) {
            return 0;
        }

        if (memo[index] == -1) {
            memo[index] = std::max(rob_max(nums, index+1, memo), nums[index] + rob_max(nums, index+2, memo));
        }

        return memo[index];
    }

    int rob(vector<int>& nums) {
        std::vector<int> memo(nums.size());
        for (auto& m : memo) {
            m = -1;
        }
        return rob_max(nums, 0, memo);
    }
};
