
#include <cmath>

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::priority_queue<
            std::pair<int, std::vector<int>>,
            std::vector<std::pair<int, std::vector<int>>>,
            std::greater<>> pq{};
        for (const auto& point : points) {
            const auto& x1 = point[0];
            const auto& y1 = point[1];
            const auto dist = pow(x1, 2) + pow(y1, 2);
            pq.push({dist, {x1, y1}});
        }

        std::vector<vector<int>> res{};
        for (auto i{0zu}; i < k; ++i) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};