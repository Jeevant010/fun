#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, ans=0;
    cin>>n;
    vector< pair<int, int>  > v(n);
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v[i].first = x;
        v[i].second = y;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i].second == v[j].first) ans++;
        }
    }
    cout<<ans;

}