class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)return 0;
        vector<char>ch(n, 1);
        ch[0] = 0;
        ch[1] = 0;
        int res = n - 2;
        for(int i = 2; i*i <n; i++){
            if(ch[i]){
                for(int j = i*i;j <n;j+=i){
                    if(ch[j]){
                        ch[j] = 0;
                    res--;
                    }
                }
            }
        }
       
        
        return res;
    }
};