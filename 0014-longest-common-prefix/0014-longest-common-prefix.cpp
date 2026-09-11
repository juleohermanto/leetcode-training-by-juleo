class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        if(strs.empty())return "";
        string front = strs.front();
        string back = strs.back();
        int size = (front.size()>back.size()) ? front.size() : back.size();
        string ret = "";
        for(int i = 0 ; i <size; i++){
            if(front[i]!=back[i]){
                return ret;
            }else{
                ret += front[i];
            }
        }
        return ret;
    }
};