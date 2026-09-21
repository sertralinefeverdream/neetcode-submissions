class Solution {
public:
    bool hasDuplicate(vector<int>& nums) { 
        vector<int> seen{};
        for (const auto& num : nums) { 
            if (std::ranges::find(seen, num) != seen.end()) {
                return true;
            }
            seen.push_back(num);
        }

        return false;
    }
};