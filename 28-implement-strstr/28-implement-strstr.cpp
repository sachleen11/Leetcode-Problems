class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        if(needle.size() > haystack.size())
            return -1;
        unordered_map<string, int> possible_needles;
        int n_size = needle.size();
        int h_size = haystack.size();
        for(int i = 0; i < h_size - n_size + 1; i++){
            if(haystack.substr(i,n_size) == needle)
                return i;
        }
        return -1;
    }
};