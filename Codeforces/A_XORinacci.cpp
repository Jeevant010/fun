#include<bits/stdc++.h>
using namespace std;
#define ll long long

// int func(ll a, ll b, ll c){
//     vector<ll> dp(c + 1, 0);
//     dp[0] = a;
//     dp[1] = b;
//     if (c == 0) return a;
//     if (c == 1) return b;
//     for (ll i = 2; i <= c; i++) {
//         dp[i] = dp[i - 1] ^ dp[i - 2];
//     }
//     return dp[c];
// }

int func(ll a, ll b, ll c){
    if(c == 0) return a;
    if(c == 1) return b;
    if(c % 3 == 0) return a ^ b;
    if(c % 3 == 1) return b;
    return a;
}

int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<func(a,b ,c)<<endl;
    }
}