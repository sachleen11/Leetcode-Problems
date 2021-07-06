class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longPref = "";
        if(strs.size() == 1)
            return strs[0];
        int i = 0;
        char chComp = strs[0][0];
        int j;
        for( i = 0; i < strs[0].size() ;i++){
            for(j = 1; j < strs.size(); j++){
                if(i < strs[j].size() && strs[j][i] != chComp)
                    return longPref;
                else if(i >= strs[j].size())
                    return longPref;
            }
            if(j == strs.size()){
                longPref += strs[0][i];
                chComp = strs[0][i+1];
            }
        }
        return longPref;
    }
};