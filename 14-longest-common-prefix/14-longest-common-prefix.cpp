class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].size() < lcp.size()){
                lcp = lcp.substr(0, strs[i].size());
            }
            for(int j = 0; j < lcp.length(); j++){
                if(lcp[j] == strs[i][j]){
                    continue;
                }
                else{
                    lcp = lcp.substr(0, j);
                    break;
                }
            }
        }
        return lcp;
    }
};