class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // Hashmap approach 
       std::unordered_map<int, int> num_map;

       for (int i = 0; i < nums.size(); ++i) {
            num_map[nums[i]] = i;
       }

       for (int i = 0; i < nums.size(); ++i) {
           const auto remainder = target - nums[i];
           if (num_map.count(remainder) && num_map[remainder] != i) {
               return {i, num_map[remainder]};
           }
       }

       return {};
    }
};
