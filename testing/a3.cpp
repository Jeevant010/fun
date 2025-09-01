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
    int n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll base = 0;
        for (int i = 0; i < n; i++) {
            base += abs(a[i] - b[i]);
        }

        if (k == 0) {
            cout << base << '\n';
            return;
        }

        vector<ll> all;
        for (int i = 0; i < n; i++) {
            all.push_back(a[i]);
            all.push_back(b[i]);
        }
        sort(all.begin(), all.end());
        ll bo = 0;

            for (int i = 0; i < k; i++) {
                if (all[2 * n - 1 - i] > all[i]) {
                    bo = max(bo,(all[2 * n - 1 - i] - all[i]));
                }
            }
            cout << max(base ,bo) << '\n';
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}