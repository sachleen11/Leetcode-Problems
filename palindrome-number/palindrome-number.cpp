class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        string rev_x = string(str_x.rbegin(), str_x.rend());
        return str_x == rev_x;
    }
};