class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> temp;

        for(int i=0;i<nums.size();i++){
            temp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(temp[diff] && temp[diff]!=i){
                if(temp[diff]<=i){
                    return {temp[diff],i};
                }
                else return {i,temp[diff]};
            }
        }

        
    }
};
