class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp;

        for (auto x : nums) {
            if (!temp.insert(x).second) {
                return true;
            }
        }

        return false;
    }
};