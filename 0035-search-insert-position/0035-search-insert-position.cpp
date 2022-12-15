class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int returnVal;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == target) {
                return i;
            }
        }
        
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == target) {
                returnVal = i;
            }
        }
        
        
        return returnVal;
    }
};