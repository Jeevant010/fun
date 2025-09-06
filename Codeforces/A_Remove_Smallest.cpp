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
    ll n;
    cin>>n;
        int i=0, a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a+n);
        bool possible = true;

        for(int j =0; j<n-1; j++)
        {
            if(a[j+1] - a[j] >1)
            {
                possible = false;
                cout<< "NO"<<"\n";
                break;
            }
           }

           if(possible) cout<< "YES"<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}

