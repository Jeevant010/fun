#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_m1ap
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
    ll i,j,k;
        ll n,x=8,y=8;
        cin>>n;

        if(n==0)
        {
            cout<<"1"<<"\n";
            return ;
        }

        if(n%4==0)
            cout<<"6"<<"\n";
        else if(n%4==1)
            cout<<"8"<<"\n";
        else if(n%4==2)
            cout<<"4"<<"\n";
        else if(n%4==3)
            cout<<"2"<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)
        solve();
    
    return 0;
}
