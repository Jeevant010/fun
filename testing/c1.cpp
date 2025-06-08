#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool fun(ll c, ll x, vector<int>& a ){
    ll s = 0,t=0 , ind = 0;
    for(int i=0;i<c;i++){
        if(a[i] == 1 ){
            s = i+1;
            break;
        }
    }
    for(int i=c-1 ;i>=0;i--){
        if(a[i] == 1 ){
            t = i+1;
            break;
        }
    }
    ind = t - s;
    return (ind < x );
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll c,x;
        cin >> c >> x;
        vector<int> v(c);
        for(int i=0;i <c; i++){
            cin>>v[i];
        }

        if(fun(c,x,v)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

