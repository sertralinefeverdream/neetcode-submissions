class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max{};
        int count{};
        for (const auto& num : nums) { 
            if (num == 0) { 
                max = std::max(max, count);
                count = 0;
            } else {
               count++; 
            }
        }

        return std::max(max, count);
    }
};