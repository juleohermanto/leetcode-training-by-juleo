class Solution {
public:
    bool isPalindrome(string s) {
        string res;

        for(char c : s){
            char t = tolower(c);
            if(t >= 97 && t<=122 || t>=48 && t<=57){
                res += t;
            }
        }
        string res2 = res;
        reverse(res2.begin(), res2.end());
        if(res == res2){
            return true;
        }else return false;
    }
};