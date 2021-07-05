class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> pattern_map;
        unordered_map<string, char> map_pattern;
        string word = "";
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                auto it = pattern_map.find(pattern[count]);
                auto it2 = map_pattern.find(word);
                if(it != pattern_map.end()){
                    if(pattern_map[pattern[count]] != word)
                        return false;
                }
                else{
                    pattern_map [pattern[count]] = word; 
                }
                if(it2 != map_pattern.end()){
                    if(map_pattern[word] != pattern[count])
                        return false;
                }
                else{
                   map_pattern[word] = pattern[count];
                }
                count++;
                word = "";
            }
            else
                word += s[i];
            }
        if(count + 1 != pattern.size())
            return false;
        if(pattern_map.find(pattern[count]) != pattern_map.end()){
            if(pattern_map[pattern[count]] != word)
                return false;
    }
        if(map_pattern.find(word) != map_pattern.end()){
            if(map_pattern[word] != pattern[count])
                return false;
    }
        return true;
    }
};