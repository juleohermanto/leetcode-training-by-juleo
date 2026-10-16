class Solution {
public:
    int firstUniqChar(string s) {
        int i = 0 ;int j;
        while(i < s.size()){
            bool check = 1;
            for(j =0; j < s.size();j++){
                if(j==i){
                    continue;
                }
                if(s[i] == s[j]){
                    check =0;break;
                }
            }
            if(check){
                return i;
            }
            i++;
        }
        return -1;
    }
};