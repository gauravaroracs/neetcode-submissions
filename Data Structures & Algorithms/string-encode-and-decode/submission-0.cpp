class Solution {
   public:
    string encode(vector<string>& strs) {
        string temp;
        for (auto x : strs) {
            temp += x;
            temp += 1;
        }
        return temp;
    }

    vector<string> decode(string s) {
        string temp;
        vector<string> res;
        for (char c : s) {
            if (c == 1) {
                res.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        return res;
    }
};
