class Solution {
public:

    char opposite(const char& c) {
        switch(c) {
            case ']': return '[';
            case '}': return '{';
            case ')': return '(';
        }
        
        return '\0';
    }
    
    bool isValid(string s) {
        stack<char> stack;
        
        for (const char& c : s) {
            if (c == '[' || c == '{' || c == '(') stack.push(c);
            else if (!stack.empty() && stack.top() == opposite(c)) stack.pop();
            else return false;
        }
        
        if (stack.empty()) {
            return true;
        }
        
        return false;
    }
};