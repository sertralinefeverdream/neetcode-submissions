class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i{0};
        int j{(int)nums.size() - 1};

        while (i <= j) {
            int mid{(int)(i+j) / 2};
            int curr{nums[mid]};
            if (curr == target) {
                return mid;
            } else if (curr > target) {
                j = mid-1;
            } else if (curr < target) {
                i = mid+1; 
            }
        } 

        return -1;
    }
};
