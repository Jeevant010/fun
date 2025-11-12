#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
#define INF 1e9


void solve() {
    int n;
        string s;
        cin >> n >> s;

        int emptyCount = 0;
        bool hasTripleDot = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') emptyCount++;

            
            if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                hasTripleDot = true;
            }
        }

        if (hasTripleDot) {
            cout << 2 << "\n"; 
        } else {
            cout << emptyCount << "\n"; 
        }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
