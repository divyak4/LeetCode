class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (i == 0 && digits.at(0) == 9) {
                digits.at(0) = 0;
                digits.insert(digits.begin(), 1);
                break;
            }
            if (digits.at(i) == 9) {
                digits.at(i) = 0;
                continue;
            }
            digits.at(i) = digits.at(i) + 1;
            break;
        }
        
        return digits;
    }
};