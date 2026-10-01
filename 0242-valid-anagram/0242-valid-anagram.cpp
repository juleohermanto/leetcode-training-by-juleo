class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length())return false;
        map<char,int>check;
        for(auto i : t){
            check[i]++;
        }
        for(auto i:s){
            if(check.find(i) == check.end()||check[i]==0){
                return false;
            }
            check[i]--;
        }
        return true;
    }
};