#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n==2) {
        cout<<"NO";
        return 0;
    }
    if(n&1) cout<<"NO";
    else cout<<"YES";
}