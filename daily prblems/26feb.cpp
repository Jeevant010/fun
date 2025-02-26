#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        vector<int> res(n), len(n);
        stack<int> s;
        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || arr[s.top()] >= arr[i])) {
                int j = s.top();
                s.pop();
                len[j] = s.empty() ? i : i - s.top() - 1;
            }
            if (i < n) s.push(i);
        }
        for (int i = 0; i < n; i++) res[len[i] - 1] = max(res[len[i] - 1], arr[i]);
        for (int i = n - 2; i >= 0; i--) res[i] = max(res[i], res[i + 1]);
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> res = ob.maxOfMins(arr);
        for (int i : res)
            cout << i << " ";
        cout << endl;
        cout << "~\n";
    }
    return 0;
}