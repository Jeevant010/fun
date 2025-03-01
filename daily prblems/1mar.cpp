#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<string> str;
        stack<int> num;
        string cur = "", temp;
        int n = 0;

        for (char c : s) {
            if (isdigit(c)) n = n * 10 + (c - '0');
            else if (c == '[') { str.push(cur); num.push(n); cur = ""; n = 0; }
            else if (c == ']') {
                temp = cur;
                cur = str.top(); str.pop();
                for (int i = 0, x = num.top(); i < x; i++) cur += temp;
                num.pop();
            } else cur += c;
        }
        return cur;
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
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}