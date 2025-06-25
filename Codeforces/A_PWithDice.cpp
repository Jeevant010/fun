#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=1; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n , m, n1=0, n2=0, d=0;
    cin>>n>>m;
    r(i,7){
        if( abs(n-i) == abs(m-i) ) d++;
        else if( abs(n-i) < abs(m-i) ) n1++;
        else n2++;
    }
    cout<<n1<<" "<<d<<" "<<n2;
}
