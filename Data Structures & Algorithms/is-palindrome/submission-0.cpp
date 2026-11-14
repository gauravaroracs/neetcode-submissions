class Solution {
public:
    bool isPalindrome(string s) {
        string fixed;
        for(char c:s){
            
            if(isalnum(c))
                fixed+=tolower(c);
        }
            int i=0;
            int j=fixed.size()-1;
        while(i<j){

            if(fixed[i]!=fixed[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
