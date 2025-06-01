#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b, x, y ;
    cin >> n >> a >> x >> b >> y;

    while(a!=x && b!=y){
        if(a!=x){
            if(a==n)
                a=1;
            else
                a++;
        }
        if(b!=y){
            if(b==1)
                b=n;
            else
                b--;
        }
        if(a==b){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    
}