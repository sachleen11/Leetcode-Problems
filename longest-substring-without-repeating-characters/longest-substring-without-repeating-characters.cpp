class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0 || s.length() == 1)
            return s.length();
        unordered_map<char,int> unique;
        int maxlen = 0;
        for(int i = 0; i < s.length(); i++){
            if(unique.find(s[i]) != unique.end()){
                if(unique.size() > maxlen)
                    maxlen = unique.size();
                int temp = unique[s[i]];
                unique.clear();
                i = temp + 1;
                unique[s[i]] = i;
            }
            else{   
                unique[s[i]] = i;
            }
        }
        if(maxlen < unique.size())
            maxlen = unique.size();
        return maxlen;
    }
};