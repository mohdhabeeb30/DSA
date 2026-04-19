class Solution {
  public:
  
    int row[4] = {-1,1,0,0};
    int col[4] = {0,0,-1,1};
    string dir = "UDLR";

    bool valid(int i, int j, int n){
        return (i >= 0 && j >= 0 && i < n && j < n);
    }

    void solve(vector<vector<int>>& maze, vector<vector<int>> &visited,
               vector<string> &ans, int i, int j, int n, string &path){
        
        if(i == n-1 && j == n-1){
            ans.push_back(path);
            return;
        }

        visited[i][j] = 1;

        for(int k = 0; k < 4; k++){
            ///  we have also anothr way to write this condition in one line but it is not that much readable so i have written in multiple lines 
            /// like left and right and up and down in one line but it is not that much readable so i have written in multiple lines 
            /// here is exapmle of one line condition
            /// for left ke liye if(valid(i, j-1, n) && maze[i][j-1] == 1 && !visited[i][j-1]) 
            /// for right ke liye if(valid(i, j+1, n) && maze[i][j+1] == 1 && !visited[i][j+1])
            // for up ke liye if(valid(i-1, j, n) && maze[i-1][j] == 1 && !visited[i-1][j])
            // for down ke liye if(valid(i+1, j, n) && maze
            /// so we right in one line but it is not that much readable so i have written in multiple lines
            if(valid(i + row[k], j + col[k], n) 
               && maze[i + row[k]][j + col[k]] == 1 
               && !visited[i + row[k]][j + col[k]]) {
                
                path.push_back(dir[k]);

                solve(maze, visited, ans, i + row[k], j + col[k], n, path);

                path.pop_back();
            }
        }

        visited[i][j] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        int n = maze.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));
        vector<string> ans;
        string path = "";

        if(maze[0][0] == 1)
            solve(maze, visited, ans, 0, 0, n, path);

        sort(ans.begin(), ans.end()); // optional but safe

        return ans;
    }
};