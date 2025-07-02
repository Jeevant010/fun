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
    ll n, m, a, b , c ;
    ll cnt=0,ans=-1;
      cin>>m>>n;
      if(m&1)m++;
      if(abs(m-n)>=2)
      cout<<m<<" "<<m+1<<" "<<m+2<<endl;
      else
      cout<<ans;
}
