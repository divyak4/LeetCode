class Solution {
public:
    int lengthOfLastWord(string s) {
        int index = 0;
        if (s.find(" ") != string::npos) {
            while (true) {
                index = s.find_last_of(" ");
                if (s.length() - 1 == index) {
                    s.erase(index);
                }
                else {
                    break;
                }
            }
            index += 1;
        }
        string substr = s.substr(index, s.length());
        return substr.length();
    }
};