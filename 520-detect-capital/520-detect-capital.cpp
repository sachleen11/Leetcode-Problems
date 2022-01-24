class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first = false; 
        int lower = 0;
        int upper = 0;
        int word_len = word.length();
        if(isupper(word[0]))
            first = true;
        for(int i = 0; i < word_len; i++){
            if(isupper(word[i]))
                upper += 1;
            else
                lower += 1;
        }
        if(lower == word_len || upper == word_len)
            return true;
        if(first && upper == 1)
            return true;
        return false;
    }
};