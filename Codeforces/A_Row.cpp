#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define eb emplace_back
#define pb push_back
#define po pop_back
#define pq priority_queue
#define INF 1e9


void solve() {
    int n,c=0,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0'&&s[i+1]=='0' && s[i+2]=='0')
        {
            c++;

        }
        else if(s[0]=='0'&&s[1]=='0')
        {
            c++;
        }
        else if(s[i]=='1'&&s[i+1]=='1')
        {
            c++;
        }

    }
    if (n==1&&s[0]=='0') cout<<"NO"<<"\n";
    else if(s[n-1]=='0'&&s[n-2]=='0')cout<<"NO"<<"\n";
    else if(c==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while( t-- ){
        solve();
    }
    return 0;
}
