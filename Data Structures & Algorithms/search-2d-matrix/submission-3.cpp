class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        bool match=false;
        while (i < matrix.size()) {
            int n = matrix[i].size() - 1;
            if (matrix[i][n] == target) return true;
            if (matrix[i][n] > target) {
                match=true;


                break;
            }

            i++;
        }
        if(match!=true)
            return false;
            

        int l = 0;
        int r = matrix[i].size() - 1;
        while (l <= r) {
            int mid = ((l + r) / 2);

            if (matrix[i][mid] == target) {
                return true;
            } else if (matrix[i][mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};
