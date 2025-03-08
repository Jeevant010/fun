#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int n = s.size(), start = 0, maxLen = 0;
        for (int i = 0; i < n; i++) {
            for (int l : {i, i + 1}) {
                int j = i;
                while (j >= 0 && l < n && s[j] == s[l]) j--, l++;
                if (l - j - 1 > maxLen) start = j + 1, maxLen = l - j - 1;
            }
        }
        return s.substr(start, maxLen);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}