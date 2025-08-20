#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if (k == 0 || n >= k + maxPts - 1) return 1.0;
        
        vector<double> dp(n + 1);
        dp[0] = 1.0;
        
        double ws = 1.0; // window sum of probabilities
        double result = 0.0;
        
        for (int i = 1; i <= n; i++) {
            dp[i] = ws / maxPts;
            if (i < k) {
                ws += dp[i];
            } else {
                result += dp[i];
            }
            if (i - maxPts >= 0) {
                ws -= dp[i - maxPts];
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    int n, k, maxPts;
    
    cout << "Enter n, k, and maxPts: ";
    cin >> n >> k >> maxPts;
    
    double ans = sol.new21Game(n, k, maxPts);
    cout << fixed << setprecision(6);
    cout << "Probability: " << ans << endl;
    
    return 0;
}
