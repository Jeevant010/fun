#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans =0;
    ll n, k;
    cin >>n>> k;

    if(k==0)ans=1;
    else if(k==n) ans=0;
    else
    {
        if(n/k  >= 2)ans=k;
        else ans=n-k;
    }
    
        cout<< ans<<endl;
}