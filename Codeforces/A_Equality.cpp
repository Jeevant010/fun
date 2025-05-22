#include<bits/stdc++.h>
using namespace std;
#define ll long long   

void equality(ll n,ll m,string s){
    vector<ll> a(26);

    for(ll i=0; i<n; i++){
        a[s[i]-'A']++;
    }

    ll ans=n;
    for(ll i=0; i<m; i++){
        ans = min(ans, a[i]);
    }
    cout<<ans*m<<endl;
}

int main(){
    ll n,m;
    cin>>n>>m;
    cin.ignore();
    string s;
    getline(cin,s);
    equality(n,m,s);
}