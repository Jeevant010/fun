#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void fac(ll c, ll n){
    if(c == 0){
        cout<<0<<endl;
        return;
    }
    if( n == c){
        for(int i=0; i<c; i++){
            cout<<1;
        }
        cout<<endl;
        return;
    }
    vector<int> v(c,0);
    if( n >= 1) v[0] = 1;
    for(int i=2; n >= i ; i++){
        v[c-i] = 1;
    }
    for(int i=0; i<c; i++){
        cout<<v[i];
    }
    cout<<endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n, k;
        cin>>n >> k;
        
        fac(n,k);
 
    }
}