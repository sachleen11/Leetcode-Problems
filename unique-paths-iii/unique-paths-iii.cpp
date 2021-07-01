class Solution {
public:
    bool checkVisited(vector<vector<bool>> visited){
        for(int i = 0; i < visited.size(); i++){
            for(int j = 0; j < visited[0].size(); j++){
                if(visited[i][j] == false)
                    return false;
            }
        }
        return true;
    }
int uniqueRec(vector<vector<int>> &grid,int i, int j, int n,int m, vector<vector<bool>> visited){
    if(grid[i][j] == 2){
            visited[i][j] = true;
            return checkVisited(visited);
        }    
    if(visited[i][j] == true)
            return 0;
        if(grid[i][j] == -1)
            return 0;
        
        int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
        visited[i][j] = true;
        if(i+1<n){
            ans1 = uniqueRec(grid, i+1, j, n,m, visited);
        }
        if(j+1<m){
            ans2 = uniqueRec(grid, i, j+1, n,m, visited);
        }
        if(i-1>=0){
            ans3 = uniqueRec(grid, i-1, j, n, m,visited);
        }
        if(j-1>=0){
            ans4 = uniqueRec(grid, i, j-1, n,m, visited);
        }
        return ans1+ans2+ans3+ans4;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int ways = 0;
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        vector<vector<bool>> visited;
        for(int i = 0; i < n; i ++){
            vector<bool> temp;
            for(int j = 0; j < m; j++){
                if(grid[i][j] == -1)
                    temp.push_back(true);
                else
                    temp.push_back(false);
            }
            visited.push_back(temp);
        }
        for( i = 0; i < n; i++){
            for( j = 0; j < m; j++){
                if(grid[i][j] == 1)
                    return uniqueRec(grid, i, j, n,m, visited);
            }
        }
        return 0;
    }
};