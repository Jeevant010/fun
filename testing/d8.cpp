#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_M = 500000;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<vector<int>> divisors(MAX_M + 1);
    for (int i = 1; i <= MAX_M; ++i) {
        for (int j = i; j <= MAX_M; j += i) {
            divisors[j].push_back(i);
        }
    }
    
    vector<int> min_n(MAX_M + 1, 1000000000);
    min_n[1] = 1;
    
    for (int m = 2; m <= MAX_M; ++m) {
        for (int d : divisors[m]) {
            int k = m / d;
            if (k == 1) 
                continue;
            if ((k - 1) % 2 == 0) {
                int a = (k - 1) / 2;
                if (a < 1) 
                    continue;
                if (min_n[d] == 1000000000) 
                    continue;
                int candidate = min_n[d] + a;
                if (candidate < min_n[m]) {
                    min_n[m] = candidate;
                }
            }
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        if (m < 1 || m > MAX_M) {
            cout << -1 << '\n';
        } else {
            if (min_n[m] == 1000000000) {
                cout << -1 << '\n';
            } else {
                cout << min_n[m] << '\n';
            }
        }
    }
    return 0;
}