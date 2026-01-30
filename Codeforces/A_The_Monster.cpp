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
    ll t,a,c,b,d,m,i,j,k=0,n,x,ans;
    cin>>a>>b>>c>>d;
    map<ll,ll>mp;

    for(i=0;i<10000;i++)
    {
      x=b+a*i;
      mp[x]=1;
    }
     for(i=0;i<10000;i++)
    {
        n=d+c*i;
        if(mp[n]==1)
        {
            k=1;
            j=n;
            break;
        }
    }
    if(k==1)
    cout<<j<<"\n";
    else
    cout<<"-1"<<"\n";
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
