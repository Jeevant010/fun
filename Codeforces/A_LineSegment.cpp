#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map


void fun(){
    ll n, a, b, x, y, mx=0, ms=0;
    cin>>n>>a>>b>>x>>y;
    r(i,n){
        ll x;
        cin>>x;
        ms += x;
        mx = max(x,mx);
    }
    ll d = (a-x)*(a-x) + (b-y)*(b-y); 
    if( ms*ms < d ){
        cout<<"No"<<endl;
        return;
    }
    ll mn = max(2*mx - ms, 0LL);
    if(mn*mn > d){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}
