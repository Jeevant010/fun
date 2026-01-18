#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

ll gcd(ll a, ll b){
    if( b>a ) swap(a,b);
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

    vector<int> bills(n);
    for (int i = 0; i < n; i++) {
        cin >> bills[i];
    }

    int count25 = 0, count50 = 0; // Counters for available bills

    for (int bill : bills) {
        if (bill == 25) {
            // Customer pays exact amount, no change needed
            count25++;
        } 
        else if (bill == 50) {
            // Needs 25 rubles change
            if (count25 > 0) {
                count25--;
                count50++;
            } else {
                cout << "NO\n";
                return ;
            }
        } 
        else if (bill == 100) {
            // Needs 75 rubles change
            if (count50 > 0 && count25 > 0) {
                // Prefer giving one 50 and one 25
                count50--;
                count25--;
            } 
            else if (count25 >= 3) {
                // Otherwise give three 25s
                count25 -= 3;
            } 
            else {
                cout << "NO\n";
        }
    }
}
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
