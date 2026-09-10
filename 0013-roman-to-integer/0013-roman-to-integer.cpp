class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>romantoint = {
            {'I', 1},
            {'V' , 5},
            {'X', 10},
            {'L', 50},
            {'C',100},
            {'D', 500},
            {'M', 1000}
        };
        int total = 0; 
        for(int i = 0; i < s.size();i++){
            if(romantoint[s[i]]<romantoint[s[i+1]]&&i+1 < s.size()){
                total -= romantoint[s[i]];
            }else{
                total += romantoint[s[i]];
            }
        }
        return total;
    }
};