class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> str_map{};
        for (const auto& str : strs) {
            auto sorted = str;
            std::sort(sorted.begin(), sorted.end());
            str_map[sorted].push_back(str);
        }


        std::vector<std::vector<string>> res{};
        for (const auto& [first,second] : str_map) {
            res.push_back(second);
        }

        return res;
    }
};
