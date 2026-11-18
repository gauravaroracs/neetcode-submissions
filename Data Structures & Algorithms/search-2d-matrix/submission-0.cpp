class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            int l = 0;
            int r = matrix[i].size()-1;
            std::cout << "Rows: " << matrix.size() << '\n';
            std::cout << "matrix[i].size(): " << matrix[i].size() << '\n';
            std::cout << "matrix[i][mid] " <<matrix[i][r] << '\n';
            while (l <= r) {
                int mid = ((l+r) / 2);

                if (matrix[i][mid] == target) {
                    return true;
                } else if (matrix[i][mid] < target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return false;
    }
};
