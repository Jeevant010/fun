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

    ll t,n,a[100001],b[100001];
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
            cin>>b[i];

        ll l = 100001,r = 0;
        bool flag = false;
        for(ll i=0; i<n; i++){
            if(a[i] == b[i])continue;
             else if(a[i] > b[i]){
                flag = true;
                break;
             }
             else if(a[i] < b[i]){
                l = min(l,i);
                r = max(r,i);
             }
        }
        if(flag){
            cout<<"NO"<<"\n";
        }
        else if( (flag == false) && (l == 100001 && r == 0)){
            cout<<"YES"<<"\n";
        }
        else{
            set<ll>s;
            for(ll i=l; i<=r; i++){
                if(a[i] > b[i] || a[i] == b[i]){
                    flag = true;
                    break;
                }
                else{
                    ll dif = abs(a[i] - b[i]);
                    s.insert(dif);
                }
            }
            if(flag == true || s.size() > 1){
                cout<<"NO"<<"\n";
            }
            else{
                cout<<"YES"<<"\n";
            }
        }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
