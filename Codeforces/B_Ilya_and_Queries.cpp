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
    int m1,l,r,cnt=0;

    int dp[100005];
    string s;

    cin>>s>>m1;

    for(int i=1;i<s.size();i++){

        if(s[i]==s[i-1])
            cnt++;

        dp[i]= cnt;

    }
    r(i,s.size()) cout<<dp[i]<<" ";
    cout<<"\n";

    while(m1--){
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<"\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)
        solve();
    
    return 0;
}
