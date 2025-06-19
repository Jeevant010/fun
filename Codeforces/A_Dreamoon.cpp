#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool f = false;
    ll n, m;
    cin>>n>>m;
    int k = n/2;
    int p = k + n-k*2;

    if(p % m == 0){
            f = true;
            cout<<p;
            return 0;
        }

    for(int i=0; i<=k && !f; i++){
        p = (k-i) + n-(k-i)*2;
        if(p % m == 0){
            f = true;
            break;
        }
    }
    if(f) cout<<p;
    else cout<<-1;
}