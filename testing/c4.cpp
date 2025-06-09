#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool fun(ll n, vector<ll> & a ){
    if( n == 2){
        if(a[0] > a[1]) {
            if(a[1]*2 >= a[0]) return true;
        }
        else if(a[1] > a[0]) {
            if(a[0]*2 >= a[1]) return true;
        }
        else {
            if(a[0] % 3 == 0) return true;
        }
        return false;
    }
    int d = 0;
    bool f = true;
    if(a[0] > a[1]) d = a[0] - a[1];
    else d = a[1] - a[0];
    if(d == 0){
        for(int i=1; i<n-1; i++){
            if(a[i] != a[i+1]) {
                f = false;
                break;
            }
        }
        if(f == true) {
            if( a[0] % n+1 == 0) return true;
            else return false; 
        }
    }
    f = true;
     for(int i=1; i<n-1; i++){
        if(a[i] > a[i+1] ){
            if( a[i] - a[i+1] != d) f = false; 
        }
        else if(a[i] < a[i+1]){
            if( a[i+1] - a[i] != d ) f = false;
        }
        else{
            if( a[0] % n+1 == 0) return true;
            else return false; 
        }
     }
     return f;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        if(fun(n, v)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

