class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> temp;

        for(auto x: nums){
            temp[x]++;
        }

        for(auto it=temp.begin();it!=temp.end();it++){
            if(it->second>1){
                return true;
            }
        }
        return false;
        
    }
};