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
    // int n;
    // cin>>n;
    // v<ll> va(n);
    // m<ll, ll> mp;
    // std::set<int> st;
    // r(i,n){
    //     std::cin>>va[i];
    //     mp[va[i]]++;
    // }
    // int a = mp.size();
    // for(ll i = n-1; i>=0; i++){
    //     if( i != (n-1) && va[i] > va[i+1] ) break;
    //         mp[va[i]]--;

    //     if( mp[va[i]] == 0) {
    //         mp.erase(va[i]);
    //         st.erase(va[i]);
    //     }
    //     else st.insert(va[i]);
    //     if( st.size() == 0 ) a = std::min(a , (int)mp.size());
    // }
    //     std::cout<<a<<"\n";

    
        int n,i;
        cin>>n;
        int a[n];
        
        map<int,int>m;
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int ans = m.size();

        for(i=n-1;i>=0;i--)
        {
            if( i!= (n-1) && a[i]>a[i+1]) break;
            m[a[i]]--;

            if(m[a[i]]==0)
            {
                m.erase(a[i]);
                s.erase(a[i]);
            }
            else s.insert(a[i]);

            if(s.size()==0) ans= min(ans,(int)m.size());
        }

        cout<<ans<<"\n";

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