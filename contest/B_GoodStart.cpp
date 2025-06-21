#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void fac(ll n, ll m , ll a, ll b, ll x1, ll x2, ll y1, ll y2 ){
    if( max(x1 , y1) <= min(x1, y1) + a -1){
        if(abs(x2 - y2) % b != 0){
            cout<<"No"<<endl;
            return;
        }
    }
    if( max(x2 , y2) <= min(x2, y2) + b -1){
        if(abs(x1 - y1) % a != 0){
            cout<<"No"<<endl;
            return;
        }
    }
    if(abs(x1-y1) % a && abs(x2-y2) % b){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll n, m, a, b, x1, x2, y1, y2;
        cin>>n >> m >> a >> b >> x1 >> x2 >> y1 >> y2;
        fac(n, m, a ,b , x1 , x2, y1 , y2);
 
    }
}