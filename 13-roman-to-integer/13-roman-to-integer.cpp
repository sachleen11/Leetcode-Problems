class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> roman; 
        roman["I"] = 1;
        roman["V"] = 5;
        roman["X"] = 10;
        roman["L"] = 50; 
        roman["C"] = 100;
        roman["D"] = 500;
        roman["M"] = 1000;
        roman["IV"] = 4;
        roman["IX"] = 9;
        roman["XL"] = 40;
        roman["XC"] = 90;
        roman["CD"] = 400;
        roman["CM"] = 900;
        
        int num = 0;
        for(int i = 0; i < s.length(); i++){
            if(roman.find(s.substr(i,2)) != roman.end()){
                num += roman[s.substr(i,2)];
                i++;
            }
            else{
                string temp = "";
                temp += s[i];
                num += roman[temp];
            }
        }
        return num;
    }
};