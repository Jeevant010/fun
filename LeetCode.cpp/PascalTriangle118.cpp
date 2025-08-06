#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int pas(int i, int j, vector<vector<int>>& dp) {
        if (i == 0 || j == 0 || j == i) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = pas(i - 1, j - 1, dp) + pas(i - 1, j, dp);
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p;
        vector<vector<int>> dp(numRows, vector<int>(numRows, -1));

        for (int i = 0; i < numRows; i++) {
            vector<int> v;
            for (int j = 0; j <= i; j++) {
                v.push_back(pas(i, j, dp));
            }
            p.push_back(v);
        }

        return p;
    }
};

int main() {
    Solution sol;
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = sol.generate(numRows);

    cout << "Pascal's Triangle:\n";
    for (auto &row : result) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
