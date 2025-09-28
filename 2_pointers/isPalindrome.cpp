class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for(char a:s){
            if ((a >= 'a' && a <= 'z') || 
                (a >= 'A' && a <= 'Z') || 
                (a >= '0' && a <= '9')) {
                res += tolower(a);
            }
        }
        int r = 0;
        int l = res.size()-1;
        while(r<l){
            if(res[r] != res[l]) return false;
            r++;
            l--;
        }

        return true;
    }
};
