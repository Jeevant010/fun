#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> fun(ll n ){
    vector<ll> res;
    for(int i=0;i<n-1; i++){
        res.push_back(i+2);
    }
    res.push_back(1);
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v = fun(n);
        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

