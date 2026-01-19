#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

ll gcd(ll a, ll b){
    if( b>a ) swap(a,b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b ){
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

void solve() {
    ll int k=0;
cin>>k;
if(k==0){
 cout<<"O-|-OOOO"<<endl;return ;}
ll int n=k;
while(n)
{
    int tp=n%10;
    
    if(tp==0)
    {
        cout<<"O-|-OOOO"<<endl;
    }
     else if(tp==1)
    {
        cout<<"O-|O-OOO"<<endl;
    }
     else if(tp==2)
    {
        cout<<"O-|OO-OO"<<endl;
    }
    else if(tp==3)
    {
        cout<<"O-|OOO-O"<<endl;
    }
     else if(tp==4)
    {
        cout<<"O-|OOOO-"<<endl;
    }
         else if(tp==5)
    {
        cout<<"-O|-OOOO"<<endl;
    }
         else if(tp==6)
    {
        cout<<"-O|O-OOO"<<endl;
    }
         else if(tp==7)
    {
        cout<<"-O|OO-OO"<<endl;
    }
           else if(tp==8)
    {
        cout<<"-O|OOO-O"<<endl;
    }
           else if(tp==9)
    {
        cout<<"-O|OOOO-"<<endl;
    }
    
    
    
    
    
    n/=10;
}
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
