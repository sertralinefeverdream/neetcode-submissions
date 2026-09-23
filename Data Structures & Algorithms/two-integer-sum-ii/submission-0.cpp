class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::size_t i{0};
        std::size_t j{numbers.size() -1};

        while (j > i) {
            const auto sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
                continue;
            } else if (sum < target) {
                i++;
                continue;
            } else {
               // Case that sum = target; 
               break;
            }
        }

        return {(int)i+1, (int)j+1};
    
    }
};
