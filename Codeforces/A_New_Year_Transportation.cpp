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
    long int x,cell,c,i,t,n,a[100000];
    vector<int>v;
    cin>>n>>t;
        cell=1;c=0;
        v.push_back(cell);
        for(i=1;i<n;i++)
            {
                cin>>a[i];
                if(cell==i)
                {
                    cell=cell+a[i];
                    v.push_back(cell);
                }
            }
            for(i=0;v[i]<=t;i++)
            {
                if(t==v[i])
             {
                 c=1;break;
             }
            }
            if(c==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
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
