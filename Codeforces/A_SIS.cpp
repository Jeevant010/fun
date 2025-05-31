#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    bool flag = false, flag2 = false;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll i = 0;
    if(n==1){
        cout<<"YES"<<endl;
        return 0;
    }
    while(a[i] < a[i+1] && i < n-1){
            i++;
            if(i == n-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    while( a[i] == a[i+1] && i < n){
        i++;
        if(i == n-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    while(a[i] > a[i+1] && i < n){
        i++;
        if(i == n-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    while(a[i] <= a[i+1] && i < n){
        flag = true;
        break;
    }
    cout<<(flag ? "NO" : "YES")<<endl;
    
}
