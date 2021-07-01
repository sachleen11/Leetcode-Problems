class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pasTria;
        vector<int> curRow;
        for(int i = 0; i < numRows; i++){
            curRow.clear();
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i)
                    curRow.push_back(1);
                else
                    curRow.push_back(pasTria[i-1][j-1] + pasTria[i-1][j]);
            }
            pasTria.push_back(curRow);
        }
        return pasTria;
    }
};