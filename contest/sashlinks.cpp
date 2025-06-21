#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void fac(ll n, ll a, ll b, ll x, ll y ){
    ll ans = 0;
    if( x > y){
        ll m = n - b;
        if(m >= 0){
            ans = m/y + 1;
            n -= y*ans;
        }

        ll m1 = n - a;
        if(m1 >= 0){
            ans += m1/x + 1;
        }
    }
    else{
        ll m1 = n - a;
        if(m1 >= 0){
            ans = m1/x + 1;
            n -= x*ans;
        }

        ll m = n - b;
        if(m >= 0){
            ans += m/y + 1;
        }
    }
        cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n, a, b, x, y;
        cin>>n >> a >> b >> x >> y;
        fac(n,a ,b , x ,y);
 
    }
}