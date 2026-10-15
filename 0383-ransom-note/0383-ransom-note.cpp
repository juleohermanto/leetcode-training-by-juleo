class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() > magazine.size())return false;
        unordered_map<char, int>ch;
        for(char c :ransomNote){
            ch[c]++;
        } 
        for(char c : magazine){
            ch[c]--;
        }
        for(const auto&[key, value] : ch){
            if(value > 0){
                return false;
            }
        }
        return true;
    }
};