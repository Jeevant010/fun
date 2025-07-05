#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    float a, b, c, d;
    cin>>a>>b>>c>>d;
    float a1 = max( 0.3*a,a - ( a/250.0)*c  );
    float b1 = max( 0.3*b, b - (b/250.0)*d );
    if( a1 > b1) cout<<"Misha";
    else if( b1>a1 ) cout<<"Vasya";
    else cout<<"Tie";

    
}
