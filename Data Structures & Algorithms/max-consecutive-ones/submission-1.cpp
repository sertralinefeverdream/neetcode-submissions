class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count{0};
        int curr_count{0};

        for (const auto& num : nums) {
            if (num == 1) {
                curr_count++;
            } else {
                curr_count = 0; 
            } 

            if (curr_count > max_count) {
                max_count = curr_count;
            }
        }

        return max_count;
    }
};