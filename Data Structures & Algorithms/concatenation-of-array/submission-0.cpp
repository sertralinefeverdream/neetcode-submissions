class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans{nums};
        for (const auto& num : nums) { 
            ans.push_back(num);
        }
        return ans;
    }
};