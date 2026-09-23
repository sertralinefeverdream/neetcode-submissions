class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int> pq{};
        for (const auto& num : nums) {
            pq.push(num);
        }

        for (auto i{0zu}; i < k-1; ++i) {
            pq.pop();
        }

        return pq.top();
    }
};
