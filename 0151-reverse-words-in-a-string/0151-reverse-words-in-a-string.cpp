class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        
        string result = "";
        string temp = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                if (temp != "") {
                    if (result != "") {
                        result += " ";
                    }
                    result += temp;
                    temp = "";
                }
            } else {
                temp = s[i] + temp;
            }
        }
        
        if (temp != "") {
            if (result != "") {
                result += " ";
            }
            result += temp;
        }
        
        return result;
    }
};