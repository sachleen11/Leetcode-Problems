class Solution {
public:
    int minPartitions(string n) {
        char maxDig = '0';
        for(int i = 0; i < n.length(); i++){
            if(n[i] > maxDig)
                maxDig = n[i];
        }
        return (int)maxDig - 48;
    }
};