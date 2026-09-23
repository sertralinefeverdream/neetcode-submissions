class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies{};

        for (const auto& num : nums) {
            frequencies[num]++;       
        }

        std::priority_queue<std::pair<int, int>> pq{};
        for (const auto [num, freq] : frequencies) {
            pq.push({freq, num});
        }

        std::vector<int> res{};

        for (auto i{0zu}; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
