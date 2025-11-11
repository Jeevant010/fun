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
    long long a, b, c;
        cin >> a >> b >> c;

        if (a + (c + 1) / 2 > b + c / 2) {
            cout << "First\n";
        } else {
            cout << "Second\n";
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
