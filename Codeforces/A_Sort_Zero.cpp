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
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]] = i;
    }
   
    int j = -1;
    int mi = a[n-1];
    int res = 0;
    for(int i=n-2;i>=0;i--){
        if(a[i] <= mi){
            mi = a[i];
        }else{
            int k = mp[a[i]];
            if(k > i){
                j = max(k,j);
            }
            else
            j = max(j,i);
            }
    }
    
    if(j>=0){
        mp.clear();
        for(int i=0;i<=j;i++){
            mp[a[i]]=1;
        }
        cout<<mp.size()<<"\n";
    }else{
        cout<<0<<"\n";
}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ;
    cin>>t;
    while (t--) {
        solve();
    }
    
}
