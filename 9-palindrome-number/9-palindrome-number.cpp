class Solution {
public:
    bool isPalindrome(int x) {
    
        string s = to_string(x);
        int a = 0;
        int b = s.length() - 1;
        
        while (a < b) {
            
            if (s.at(a) != s.at(b)) {
                return false;
            }
            
            
            a++;
            b--;
        }
        
        return true;
     
    }
};