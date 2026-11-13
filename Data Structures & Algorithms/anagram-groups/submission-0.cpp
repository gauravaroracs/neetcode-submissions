class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> res;
        
        for(int i=0;i<strs.size();i++){

            
            vector<int> temp(26,0);
            for(char c: strs[i]){
                temp[c-'a']++;
            }
            res[temp].push_back(strs[i]);
            

        }

          vector<vector<string>> final;
        for (const auto& entry : res) {
            final.push_back(entry.second);
        }
        return final;
        
    }
};
