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
    int n;
    cin>>n;
    int m,c;
    int winM=0,winC=0,draw=0;
    for(int i=0; i<n; i++)
    {
        cin>>m>>c;

        if(m>c)
            winM++;
        else if(m<c)
            winC++;
        else if(m==c)
            draw++;
    }
    if(draw==n || winM==winC )
        cout<<"Friendship is magic!^^";
    else if(winM>winC)
        cout<<"Mishka";
    else
        cout<<"Chris";
		cout <<  "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t  = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
