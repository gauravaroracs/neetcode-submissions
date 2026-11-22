class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;
        for (int x : nums) {
            temp[x]++;
        }
        vector<vector<int>> cnt(nums.size()+1);
        for(const auto& [k,v]:temp){
            cnt[v].push_back(k);
        }


        vector<int> res;
        for(int i=nums.size();i>0;i--){

            res.insert(res.end(),cnt[i].begin(),cnt[i].end());
            if(res.size()==k){
                return res;
            }
        }
        return res;

       
    }
};
