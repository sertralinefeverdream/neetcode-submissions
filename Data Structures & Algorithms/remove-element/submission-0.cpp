class Solution {
public:
    int removeElement(vector<int>& nums, int val) { 
        vector<int> tmp{};
        for (const auto num : nums) {
            if (num != val) {
                tmp.push_back(num);
            }
        }

        for (auto i{0zu}; i < tmp.size(); ++i) {
            nums[i] = tmp[i];
        }

        return tmp.size();
    }
};