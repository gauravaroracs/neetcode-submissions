class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;

        while(i<j){
            int diff=target-(numbers[i]+numbers[j]);
            if(diff==0){
                return {i+1,j+1};

            }
            else if(diff>0){
                i++;
            }
            else j--;
        }
        
        
    }
};
