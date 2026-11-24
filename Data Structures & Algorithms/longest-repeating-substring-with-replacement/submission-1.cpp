class Solution {
   public:
    int characterReplacement(string s, int k) {
        int i = 0;
        int cnt = 0;
        int max_cnt = INT_MIN;
        unordered_map<char, int> temp;
        for (int j = 0; j < s.size(); j++) {
            temp[s[j]]++;

            auto it = max_element(temp.begin(), temp.end(),
                                  [](const auto& a, const auto& b) { return a.second < b.second; });

                int res = (j - i) + 1 - it->second;
            if (res <= k) {
                max_cnt = max(max_cnt, j - i + 1);
                continue;
            } else {
                temp[s[i]]--;
                i++;
                max_cnt = max(max_cnt, j - i + 1);
            }
        }
        return max_cnt;
    }
};
