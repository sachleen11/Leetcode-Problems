class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<vector<bool>> visited;
        for(int i = 0; i < grid.size(); i++){
            vector<bool> row;
            for(int j = 0; j < grid[0].size(); j++){
                row.push_back(false);
            }
            visited.push_back(row);
        }
        
        for(int i = 0; i < grid.size(); i++){
            int count = 0; 
            int first = -1;
            for(int j = 0; j < grid[0].size(); j++){
                if(count == 0){
                    if(grid[i][j]){ 
                        first = j;
                        count++;
                    }
                }
                else{
                    if(grid[i][j]){
                        visited[i][j] = true;
                        visited[i][first] = true;
                        count++;
                    }
                }
            }
        }
        
        for(int j = 0; j < grid[0].size(); j++){
            int count = 0; 
            int first = -1;
            for(int i = 0; i < grid.size(); i++){
                if(count == 0){
                    if(grid[i][j]){ 
                        first = i;
                        count++;
                    }
                }
                else{
                    if(grid[i][j]){
                        visited[i][j] = true;
                        visited[first][j] = true;
                        count++;
                    }
                }
            }
        }
        
        int ans = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                cout << visited[i][j] << " ";
                if(visited[i][j])
                     ans++;
            }
            cout << endl;
        }
        return ans;
    }
};