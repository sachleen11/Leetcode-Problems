class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i != -1){
            cout << i << endl;
            if(digits[i] == 9){
                digits[i] = 0;

                i--;
            }
            else{
                digits[i] += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1, 1);
        return digits;
    }
};