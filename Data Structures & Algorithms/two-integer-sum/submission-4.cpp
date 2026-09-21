class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Two-pointer approach
        std::vector<std::pair<int, int>> num_pairs;

        for (auto i{0zu}; i < nums.size(); ++i) {
            num_pairs.push_back({nums[i], i});
        }

        std::sort(num_pairs.begin(), num_pairs.end());
        int i{0};
        int j{(int)(num_pairs.size()) - 1};

        while (j > i) {
            const auto sum = num_pairs[i].first + num_pairs[j].first;
            if (sum == target) {
                return {std::min(num_pairs[i].second, num_pairs[j].second), std::max(num_pairs[i].second, num_pairs[j].second)};
            } else if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            }
        }

        return {i, j};
    }
};
