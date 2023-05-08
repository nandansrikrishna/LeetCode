class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                stack.push('(');
            }
            else if (s[i] == '{') {
                stack.push('{');
            }
            else if (s[i] == '[') {
                stack.push('[');
            }
            else if (s[i] == ')') {
                if (stack.empty()) {
                    return false;
                } 
                if (stack.top() == '(') {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
            else if (s[i] == '}') {
                if (stack.empty()) {
                    return false;
                } 
                if (stack.top() == '{') {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
            else {
                if (stack.empty()) {
                    return false;
                } 
                if (stack.top() == '[') {
                    stack.pop();
                }
                else {
                    return false;
                }
            }
        }
        if (stack.empty()) {
            return true;
        }
        return false;
    }
};