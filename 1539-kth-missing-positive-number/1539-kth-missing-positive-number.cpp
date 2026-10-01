class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ch = 0;
        for(int i = 1; i <= INT_MAX;i++){
            if(k==0){
                ch = i-1;
                break;
            }
            if(!binary_search(arr.begin(), arr.end(), i)){
                k--;
            }
        }
        return ch;
    }
};