class Solution {
public:
    string convertToTitle(int columnNumber) {
        //if it still can divide, divide it into the end
        //ASCII convert code

        string s = "";
        while(columnNumber >0){
            columnNumber--;
            s = char((columnNumber %26) + 65) + s;
            columnNumber /=26;
        }
       return s;
    }
};