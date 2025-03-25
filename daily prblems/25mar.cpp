#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int countWays(string &s) {
        // code here
        int n = s.size();
        vector<vector<int>> T(n, vector<int>(n)), F(n, vector<int>(n));
        for (int i = 0; i < n; i += 2) T[i][i] = s[i] == 'T', F[i][i] = s[i] == 'F';
        for (int l = 2; l < n; l += 2)
            for (int i = 0; i < n - l; i += 2) 
                for (int k = i + 1, j = i + l; k < j; k += 2) {
                    int lt = T[i][k - 1], lf = F[i][k - 1], rt = T[k + 1][j], rf = F[k + 1][j];
                    if (s[k] == '&') T[i][j] += lt * rt, F[i][j] += lt * rf + lf * rt + lf * rf;
                    else if (s[k] == '|') T[i][j] += lt * rt + lt * rf + lf * rt, F[i][j] += lf * rf;
                    else T[i][j] += lt * rf + lf * rt, F[i][j] += lt * rt + lf * rf;
                }
        return T[0][n - 1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}