#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      long long countWays(int n) {
          // your code here
          long long a = 1, b = 1;
          for (int i = 2; i <= n; i++) 
              tie(a, b) = make_tuple(b, a + b);
          return b;
      }
  };
  
  
  
  //{ Driver Code Starts.
  int main() {
      // taking total testcases
      int t;
      cin >> t;
      while (t--) {
          // taking stair count
          int m;
          cin >> m;
          Solution ob;
          cout << ob.countWays(m) << endl; // Print the output from our pre computed array
  
          cout << "~"
               << "\n";
      }
      return 0;
  }