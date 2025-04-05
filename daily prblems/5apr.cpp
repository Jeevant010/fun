#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countIslands(vector<vector<char>>& g) {
        // Code here
         int n = g.size(), m = g[0].size(), ans = 0;
        function<void(int,int)> f = [&](int i, int j){
            if(i < 0 || i >= n || j < 0 || j >= m || g[i][j] == 'W') return;
            g[i][j] = 'W';
            for(int a = -1; a <= 1; a++) 
                for(int b = -1; b <= 1; b++) 
                    f(i + a, j + b);
        };
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(g[i][j] == 'L') { ans++; f(i, j); }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}