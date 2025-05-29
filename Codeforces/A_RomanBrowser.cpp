#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < m; i++) {
    vector<ll> v(a.begin(), a.end());
    ll m1 = 0;


    for(int j = v.size() - 1; j >= 0; j--) {
        if ((j - i) % m == 0 && (j - i) >= 0) {
            v.erase(v.begin() + j);
        }
    }

    for(auto x : v) m1 += x;
    m1 = abs(m1);
    
    if(m1 > max) {
        max = m1;
    }
}

    cout << max << endl;
}