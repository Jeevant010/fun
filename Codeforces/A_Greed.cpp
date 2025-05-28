#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, s=0 , maxsec = INT_MIN;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    vector<ll> b(n);
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }
    if(n == 1){
        cout << "NO" << endl;
        return 0;
    }
    if(n == 2){
        cout<< "YES" << endl;
        return 0;
    }
    ll maxVal = *max_element(b.begin(), b.end());
    ll minVal = *min_element(b.begin(), b.end());
    ll k = 0;

    for(ll i=0; i<n; i++){
        if(b[i] != maxVal && b[i] > maxsec){
            maxsec = b[i];
        }
    }
    if(maxsec == INT_MIN){
        maxsec = b[0];
    }
    if(s <= maxVal + maxsec && s >= minVal){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}