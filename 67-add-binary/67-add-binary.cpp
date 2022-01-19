class Solution {
public:
    string addBinary(string a, string b) {
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        if(a.length() > b.length()){
            int diff = a.length() - b.length();
            for(int j = 0; j < diff; j++){
                b += '0';
            }
        }
        else if(a.length() < b.length()){
            int diff = b.length() - a.length();
            for(int j = 0; j < diff; j++){
                a += '0';
            }
        }
        
        cout << a << endl;
        cout << b << endl;
        
        string sum_bin = ""; 
        
        int i = 0; 
        int carry = 0; 
        
        while(i < a.length() && i < b.length()){
            
            if(a[i] == b[i]){
                if(a[i] == '0'){
                    if(carry == 0)
                        sum_bin += '0';
                    else{
                        sum_bin += '1';
                        carry = 0;
                    }
                }
                else{
                    if(carry == 1)
                        sum_bin += '1';
                    else{
                        sum_bin += '0';
                        carry = 1;
                    }
                }
            }
            else{
                cout << i << endl;
                if(carry == 1){
                    sum_bin += '0';
                }
                else{
                    sum_bin +='1';
                }
            }
            i += 1;
        }
        
        if(carry == 1)
            sum_bin += '1';
        
        reverse(sum_bin.begin(), sum_bin.end());
        
        return sum_bin;
        
    }
};