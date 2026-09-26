class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stc{};

        for (const auto& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stc.push(c);
                continue;
            }

            if (stc.empty()) {
                return false;
            }

            const auto& top = stc.top();
            if (top == '(' && c == ')'
                || top == '{' && c == '}'
                || top == '[' && c == ']') {
                stc.pop();
            } else {
                break;
            }
        }

        return stc.empty();
    }
};
