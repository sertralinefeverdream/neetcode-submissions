class KthLargest {
private:
    std::vector<int>* nums_;
    int k_;
public:
    KthLargest(int k, vector<int>& nums)
    : k_{k}
    , nums_{&nums} {}
    
    int add(int val) {
        nums_->push_back(val);
        std::priority_queue<int> pq{};

        for (const auto& num : *nums_) {
            pq.push(num);
        }

        for (auto i{0zu}; i < k_-1; ++i) {
            pq.pop();
        }

        return pq.top();
    }
};
