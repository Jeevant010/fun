#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int len = 2; len < n; len++) {
            for (int i = 1, j = len; j < n; i++, j++) {
                dp[i][j] = INT_MAX;
                for (int k = i; k < j; k++)
                    dp[i][j] = min(dp[i][j], arr[i - 1] * arr[k] * arr[j] + dp[i][k] + dp[k + 1][j]);
            }
        }
        return dp[1][n - 1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}