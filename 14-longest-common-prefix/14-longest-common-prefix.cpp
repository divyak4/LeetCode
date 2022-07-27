class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool isPrefix = true;
        string prefix = "";
        
        for (int i = 0; i < strs.size(); i++) {
            for (int j = i + 1; j < strs.size(); j++) {
                if (strs.at(i).size() > strs.at(j).size()) {
                    string temp = strs.at(i);
                    strs.at(i) = strs.at(j);
                    strs.at(j) = temp;
                }
            }
        }
        
        
        int i = 0;
        
        while (i < strs.at(0).length()) {
            char pre = strs.at(0)[i];
            
            for (int j = 0; j < strs.size(); j++) {
                string str = strs.at(j);
                
                if (str[i] != pre) return prefix;
            }
            
            prefix += pre;
            
            i++;
        }
        
        return prefix;
    }
};