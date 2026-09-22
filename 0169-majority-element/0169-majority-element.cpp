class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> a;
       for(auto x : nums){
            a[x]++;
       }
        int check = INT_MIN;
        int res;
       for(auto z : a){
            if(z.second > check){
                res = z.first;
                check = z.second;
            }
       }
       return res;
    }
};