class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        std::priority_queue<int> pq{};    

        for (const auto& wt : stones) {
            pq.push(wt);
        }

        while (pq.size() > 1) {
            const auto y = pq.top();
            pq.pop();
            const auto x = pq.top();
            pq.pop();

            if (x < y) {
                pq.push(y - x);
            }
        }

        return pq.size() ? pq.top() : 0; 
    }
};
