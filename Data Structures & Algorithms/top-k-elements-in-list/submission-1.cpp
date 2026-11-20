class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> temp;
        for (int x : nums) {
            temp[x]++;
        }
        vector<pair<int, int>> items(temp.begin(), temp.end());

        sort(items.begin(), items.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });

        auto it = items.begin();
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(it->first);
            it++;
        }
        return res;
    }
};
