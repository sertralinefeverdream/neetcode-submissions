class Solution {
public:
    bool isPalindrome(string s) {
        std::size_t i{0};
        std::size_t j{s.size()-1};

        while (j > i) {
            char a{s[i]};
            char b{s[j]};

            if (!isalnum(a)) {
                i++;
                continue;
            }

            if (!isalnum(b)) {
                j--;
                continue;
            }

            if (tolower(a) != tolower(b)) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
