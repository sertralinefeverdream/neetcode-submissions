class Solution {
public:
    int rob_max(std::vector<int>& nums, int index) {
        if (index >= nums.size()) {
            return 0;
        }

        return std::max(rob_max(nums, index + 1), nums[index] + rob_max(nums, index + 2));
    }

    int rob(vector<int>& nums) {
        return rob_max(nums, 0);
    }
};
