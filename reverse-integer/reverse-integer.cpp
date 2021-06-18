class Solution {
public:
    int reverse(int x) {
        bool is_neg = false; 
        long x_read;
        if(x < 0){
            is_neg = true;
            x_read = 0 - long(x);
        }
        string str_x = to_string(x_read);
        str_x = string(str_x.rbegin(), str_x.rend());
        long rev_x = stoll(str_x);
        if(rev_x > INT_MAX || rev_x < INT_MIN)
            return 0;
        if(is_neg)
            rev_x = 0 - rev_x;
        return rev_x;
    }
};