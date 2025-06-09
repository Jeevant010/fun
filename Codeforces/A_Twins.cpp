#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, total = 0 , sum =0;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        total += v[i];
    }
    sort(v.begin(),v.end());
    int i=0;
    for(i=n-1; i>= 0; i--){
        sum+= v[i];
        int l = total - sum;
        if(sum > l) break;
    }
    cout<<n-i<<endl;
}