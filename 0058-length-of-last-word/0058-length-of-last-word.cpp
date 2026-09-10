class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx = 0, check = 0;
        reverse(s.begin(), s.end());
        for(int i =0 ; i < s.length();i++){
            if(idx!=0 && s[i]==' '){
                check = idx;
                return check;
            }else if(s[i]==' '){
                continue;
            }
            idx++;
        }
        check = idx;
        return check;
    }

};