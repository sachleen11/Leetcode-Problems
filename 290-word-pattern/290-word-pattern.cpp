class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<string,char> mapping;
        unordered_map<char, string> pat_map;
        int word_count = 0;
        string word = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                if(mapping.find(word) == mapping.end()){
                    mapping[word] = pattern[word_count];
                }
                else{
                    if(mapping[word] != pattern[word_count])
                        return false;
                }
                if(pat_map.find(pattern[word_count]) == pat_map.end()){
                    pat_map[pattern[word_count]] = word;
                }
                else{
                    if(pat_map[pattern[word_count]] != word)
                        return false;
                }
                word_count +=1;
                word = "";
            }
            
            else{
                word += s[i];
            }
        }
        if(word_count + 1 != pattern.size())
            return false;
        
        if(mapping.find(word) != mapping.end())
            if(mapping[word] != pattern[word_count])
                return false;
        
        if(pat_map.find(pattern[word_count]) != pat_map.end())
            if(pat_map[pattern[word_count]] != word)
                    return false;
        
        return true;
    }
};