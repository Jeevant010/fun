#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool wordBreak(string &s, vector<string> &d) {
        // code here
         unordered_set<string> u(d.begin(), d.end());
        int n = s.size(), m = 0;
        for(auto &w : d) m = max(m, (int)w.size());
        vector<bool> dp(n + 1);
        dp[0] = 1;
        for(int i = 0; i < n; i++) {
            if(!dp[i]) continue;
            for(int j = 1; j <= m && i + j <= n; j++)
                if(u.count(s.substr(i, j))) dp[i + j] = 1;
        }
        return dp[n];
    }
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}