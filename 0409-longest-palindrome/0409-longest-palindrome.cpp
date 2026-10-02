class Solution {
public:
    int longestPalindrome(string s) {
        string check;int odd = 0;
        map<char, int>set;
        for(auto c: s){
            check += tolower(c);
        }
        for(int i = 0; i < s.length();i++){
            set[s[i]]++;
            if(set[s[i]] % 2 ==1){
                odd++;
            }else{
                odd--;
            }
        }
        if(odd>1){
            return s.length()-odd+1;
        }
    return s.length();
}
};