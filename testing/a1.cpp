/*
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠁⠙⠉⠘⠁⠑⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⠀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠻⢿⣿⣿⣿⣿⣿ 
⣿⣿⣿⣿⣿⣿⣿⡏⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣢⣶⣶⣾⣶⣦⣄⠀⠀⠀⠀⠀⠻⢿⣿⣿⣿⠀
⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢸⣟⠻⠿⢿⣿⣿⡿⠀⠀⠀⠀⠀⠀⢋⢿⡿⣿⠀
⣿⣿⣿⣟⣟⣺⣁⠾⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⡟⠄⡱⣮⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢿⣽⣿⠀
⣿⡟⣻⣸⡟⡼⠷⣦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⡛⠟⣿⣾⣿⣿⣿⡿⠀⢀⡀⠀⠀⠀⠀⢠⣿⣿⣿⠀
⣿⣿⣷⣤⣵⢁⣈⠀⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠠⠈⠲⣿⣿⣿⣿⡿⠃⢰⡟⣹⡏⠄⠀⠄⣿⣿⣿⣿⠀
⣿⣿⠾⣿⣿⡎⠁⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⣰⣇⢸⡟⠙⠋⠀⠠⠻⣷⡯⢡⣠⡾⣸⣿⣿⣿⣿⠀
⣿⣿⣗⡈⠉⠁⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠁⠀⠀⠀⠀⠀⣀⣾⣿⡗⠀⢸⣼⢇⣿⣿⣿⣿⣿⠀
⣿⣿⠁⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⢀⣤⣾⣿⣿⢿⠇⠀⢿⡀⠀⠻⣿⣿⣿⣿⠀
⣿⣿⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠛⠋⠃⠐⢺⣿⣿⣿⣿⣦⣲⡄⠀⠀⠀⠀⠈⠙⠿⢿⠀
⣿⡟⢀⠂⠀⡀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⣝⢿⣿⡿⢟⣬⡹⡀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⡇⠀⡀⠈⠀⠀⢺⠻⠿⠟⠛⠋⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠈⢁⡰⠿⣯⣏⣏⡠⠀⠀⠀⠀⠀⠀⠀
⣿⣇⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠈⠐⠚⣋⠍⠱⡬⡂⠀⠀⠀⠀⠀⠀
⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⡀⠀⠄⠀⢘⠁⠁⣈⡀⣉⠀⣰⢳⢳⡀⠀⠀⠀⠀⢀
⣿⣿⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣢⢷⠈⠀⠈⠐⠀⠀⠀⠃⡠⣽⠦⣄⠁⠀⠀
⣿⣿⣷⣤⣄⢀⣀⣀⡀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠊⠀⠀⠀⠈⠀⠀⠀⠀⠁⠈⢴⣤⣛⡃⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣤⣶⣾⣿⣿⣿⣧⠀⠀⠀⠂⡆⢠⠠⠤⠄⡀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣧⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⣀⢡⠧⡄⠀⢠⣿⡀⣇⣸⠃⠀⠀⠀⠀⠀⠀⠀⠹⢿⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠂⠀⠀⠘⢠⢠⡕⡀⣊⡈⣂⠃⠙⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define INF 1e9

ll gcd(ll a, ll b){
    if( b > a ) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b ){
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}



void solve() {
    int n;
        cin >> n;
        vector<int> a(n);
        bool has_zero = false;
        vector<int> fixed;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                has_zero = true;
            }
            if (a[i] != -1) {
                fixed.push_back(a[i]);
            }
        }

        if (has_zero) {
            cout << "NO\n";
        } else {
            if (fixed.empty()) {
                cout << "YES\n";
            } else {
                set<int> s(fixed.begin(), fixed.end());
                if (s.size() == 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
