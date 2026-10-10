class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<char>letters;
        for(char ch: s){
            if(isalpha(ch)){
                letters.push_back(ch);
            }
        }
        reverse(letters.begin(), letters.end());
        int index = 0;

        for(char& ch :s){
            if(isalpha(ch)){
                ch = letters[index++];
            }
        }
        return s;
    }
};