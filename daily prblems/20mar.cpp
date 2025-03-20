#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> & a) {
        // code here
        int b1 = INT_MAX, s1 = 0, b2 = INT_MAX, s2 = 0;
        for (int p : a) {
            b1 = min(b1, p);
            s1 = max(s1, p - b1);
            b2 = min(b2, p - s1);
            s2 = max(s2, p - b2);
        }
        return s2;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}