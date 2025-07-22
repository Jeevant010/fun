#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
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
    v<p <int , int> >a(n) ,b(n);
    r(i,n){
        cin>>a[i].first;
        cin>>b[i].first;
        a[i].second = i;
        b[i].second = i;
    }
    sort( trvs(a));
    sort(trvs(b));

    v <int> c(n) , d(n);
    r(i,n){
        c[a[i].second] = i;
        d[b[i].second] = i;
    }

    v <int> t1, t2, t3, t4;
    r(i,n){
        if( c[i] < (n/2) && d[i] < (n/2)){
            t1.eb(i);
        }
        else if( c[i] >= (n/2) && d[i] < (n/2)){
            t2.eb(i);
        }
        else if( c[i] >= (n/2) && d[i] >= (n/2)){
            t3.eb(i);
        }
        else {
            t4.eb(i);
        }
    }
    v < p <int, int> > as;
    r(i, (int)t1.size()){
        as.push_back({ t1[i] , t3[i] });
    }
    r(i, (int)t2.size() ){
        as.push_back( {t2[i] ,t4[i] });
    }
    for(auto x  : as ){
        cout<< x.first+1 <<" "<< x.second + 1 <<"\n";
    }
        
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}
