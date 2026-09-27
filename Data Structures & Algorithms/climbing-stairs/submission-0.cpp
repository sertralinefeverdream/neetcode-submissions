class Solution {
public:
    int climbStairs(int n) {
        int prev{1};
        int curr{1};

        for (auto i{1zu}; i < n; ++i) {
           int next = prev + curr; 
           prev = curr;
           curr = next;
        }

        return curr;
    }
};
