#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here 
        stack<int> st; st.push(-1);
                int m = 0;
                for (int i = 0; i < s.size(); i++)
                    if (s[i] == '(') st.push(i);
                    else { 
                        st.pop(); 
                        if (st.empty()) st.push(i); 
                        else m = max(m, i - st.top()); 
                    }
                return m;
            
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
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}