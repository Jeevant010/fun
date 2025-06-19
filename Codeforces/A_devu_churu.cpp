#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, t;
    cin >>n>>m;
    vector<int> v(n);
    for(int i=0;i<n ;i++){
        cin>>v[i];
    }
    bool f = false;
    int s = accumulate(v.begin(),v.end(),0);
    if((n-1)*10 + s <= m){
        t = ((m-s)/5);
        f = true;
    }
        if(f) cout<<t;
        else cout<<-1;
}
