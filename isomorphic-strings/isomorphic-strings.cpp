class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char,char> isomorph;
        unordered_map<char, char> morphiso;
        for(int i = 0; i < s.length(); i++){
            if(isomorph.find(s[i])!= isomorph.end()){
                if(isomorph[s[i]] != t[i])
                    return false;
            }
            else{
                isomorph[s[i]] = t[i];
            }
            if(morphiso.find(t[i])!= morphiso.end()){
                if(morphiso[t[i]] != s[i])
                    return false;
            }
            else{
                morphiso[t[i]] = s[i];
            }
        }
        return true;
    }
};