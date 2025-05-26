#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<ll> a(100001, 1);

    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll k=0,l=0,ans = 0;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            a[k]++;
        }
        else{
            k++;
        }
    }
    for(int i=1; i<=k; i++){
        if(a[i] == a[i-1]){
            l = 2* a[i];
            ans = max(ans,l);
        }
        else if(a[i] > a[i-1]){
            l = 2* a[i-1];
            ans = max(ans,l);
        }
        else{
            l = 2* a[i];
            ans = max(ans,l);
        }
    }
    cout<<ans<<endl;

}