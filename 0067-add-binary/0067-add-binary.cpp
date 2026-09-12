class Solution {
public:
    string addBinary(string a, string b) {
        string c; int check =0;
        int i = a.length()-1, j = b.length()-1;
        while(i>=0 ||j >=0 ||check){
            if(i>=0)check += a[i--] -'0';
            if(j>=0)check += b[j--] -'0';
            c += check %2 + '0';
            check /=2;
        }
        reverse(begin(c), end(c));
        return c;
        //case 1 : jika array udah mentok, stoip hitung hitung, auto break
        //case 2 : jika yang array 1 + 1 maka jadi 0 untuk string c, lalu kedepannya simpan save, jika save = 1, maka berlaku ke case 2 secara redundant
        //case 3 : jika sudah diujung array (string yang paling panjang), maka tambahan 1 didepannya, dan array string yang dimasuk sebelumnya berpindah ke array idx+1 (string aman untuk pindah)
        
        //process : if a[a.length()-i]=='1' && b[b.length()-i] == '1']  
    }
};