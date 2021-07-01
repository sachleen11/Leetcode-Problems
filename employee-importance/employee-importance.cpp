/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> empInfo;
        for(auto i : employees)
            empInfo[i->id] = i;
        int sum = 0;
        DFS(empInfo, id, sum);
        return sum;
    }
    void DFS(unordered_map<int, Employee*> empInfo, int id, int &sum){
        sum += empInfo[id] -> importance; 
        for(auto i: empInfo[id]->subordinates){
            DFS(empInfo, i, sum);
        }
    }
};