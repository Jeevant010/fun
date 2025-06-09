#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll n, vector<ll> & a, vector<ll>& b  ){
    int s=0;
    for(int i=n; i>2; i--){
        int max = 0;
        if(a[i] == b[i-2]){
            max = i-2;
        }
        if(b[i] == a[i-2]){
            max = i-2;
        }
        if(a[i] == a[i-1]){
            max = i-1;
        }
        if(b[i] == b[i-1]){
            max = i-1;
        }
        if(max>s) s = max;
    }
    return s;
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
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        vector<ll> v1(n);
        for(int i=1; i<=n; i++){
            cin>>v1[i];
        }
        cout<<fun(n, v, v1)<<endl;
    }
}

