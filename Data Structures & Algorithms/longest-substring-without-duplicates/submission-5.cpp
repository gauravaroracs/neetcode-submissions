class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> temp;
        int cnt_max = INT_MIN;
        int cnt = 0;
        int n = s.size();
        int l = 0;
        int r = 0;
        if (n == 0) return 0;

        if (n == 1) return 1;

        while (r < n) {
            temp[s[r]]++;

            while (temp[s[r]] > 1) {
                temp[s[l]]--;
                l++;
                cnt--;
            }
            r++;
            cnt++;
            cnt_max = max(cnt_max, cnt);
        }

        return cnt_max;
    }
};
