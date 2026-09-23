class Solution {
public:
    int maxArea(vector<int>& heights) {
        std::size_t i{0};
        std::size_t j{heights.size() - 1};

        int max{0};

        while (j > i) {
            const int& h1{heights[i]};
            const int& h2{heights[j]};
            const int area = std::min(h1, h2) * (j-i);
            
            if (area > max) {
                max = area;
            }

            if (h1 < h2) {
                i++;
            } else if (h1 > h2) {
                j--; 
            } else {
                i++;
                j--;
            }
        }

        return max;
    }
};
