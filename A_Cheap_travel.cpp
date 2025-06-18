#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int k = n/m;
    int cost = 0;
    int p = k*b; 
    if(p+b > a*n) {
        if(p + a*(n-k*m) > a*n) {
            cout<<a*n;
            return 0;
        }else {
             cout<<p + a*(n-k*m);
             return 0;
        }
    }
    else {
        if(p+b > p + a*(n-k*m)) cout<<p + a*(n-k*m);
        else cout<<p+b;
    }
}