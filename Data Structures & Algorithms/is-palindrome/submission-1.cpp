class Solution {
   public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            cout<<"isalnum(s[i]) "<<isalnum(s[i])<<endl;
            while(i<j && !isalnum(s[i]) ){
                i++;
            }
            while(i<j && !isalnum(s[j])){
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        // for(char c:s){

        //     if(isalnum(c))
        //         fixed+=tolower(c);
        // }
        //     int i=0;
        //     int j=fixed.size()-1;
        // while(i<j){

        //     if(fixed[i]!=fixed[j]){
        //         return false;
        //     }
        //     i++;
        //     j--;
        // }
        return true;
    }
};
