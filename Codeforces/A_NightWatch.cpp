#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, c = 0;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(ll i = 0; i < n; i++) {
        if( a[i]>a[0] && a[i] < a[n-1] ) c++;
    }
    cout<< c << endl;
    
}