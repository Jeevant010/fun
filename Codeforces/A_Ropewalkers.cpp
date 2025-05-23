#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll a, b, c, d, e=0, f=0 ;
    ll ans = 0;
    cin >> a >> b >> c >> d;
    
    if(a > b){
        swap(a,b);
        if(a > c){
            swap(a,c);
        }
    }
    if(b > c){
        swap(b,c);
        if(a > b){
            swap(a,b);
        }
    }

    e = b - a;
    f = c - b;
    if(e < d){
        ans += d - e;
    }
    if(f < d){
        ans += d - f;
    }
    cout<<ans<<endl;


}