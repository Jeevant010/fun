#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

void fun(){
    int a,b;
        cin>>a>>b;
        if (a%b!=0)
        {
            cout<<1<<"\n";
            cout<<a<<"\n";
        }
        else
        {
            cout<<2<<"\n";
            cout<<1<<" "<<a-1<<"\n";
        }
            
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}
