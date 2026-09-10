class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //case 1 :  kalau bukan 9 maka langsung tambahkan ke array terakhir
        //case 2 : kalau 9, maka jadi 0, dan array i-1 for loop ditambah 1, kalau misalkan a[1]=10, maka buatin array baru, lalu mundur 1 index ke belakang

        //diff solution : array yang pertama sampai terakhir ditumpuk jadi integer, baru +1, baru susun ulang array (tapi ga mungkin, constraint lengthnya 100, setara 10^100, ga muat dalam bentuk long)
        //berarti case awal yang satu satunya solusi tersebut
        for(int i = digits.size()-1; i > 0;i--){
            if(digits[i] != 9){
                digits[i]+=1;
                return digits;
            }else{
                digits[i]=0;
            }
        }
        if(digits[0]==9){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }else{
            digits[0]+=1;
        }
        return digits;
    }
};