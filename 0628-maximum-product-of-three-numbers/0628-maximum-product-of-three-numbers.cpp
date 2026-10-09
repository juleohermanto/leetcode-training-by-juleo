class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        if(nums.size()==3){
            return nums[0]*nums[1]*nums[2];
        }
        long long res = 1, res2= 1;
        for(int i = 0;i < 3; i++){
            res *= nums[i];
        }
        for(int i = nums.size()-1; i > nums.size()-3; i--){
            res2 *= nums[i];
    
        }
        
        res2 *= nums[0];
        if(res2 < res){
            return res;
        }else{
            return res2;
        }
    
    }
    
};