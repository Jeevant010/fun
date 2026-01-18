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
     long int tf,fy,hn,n,c,i,a[100001];
     cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1;
        tf=0;
        hn=0;
        fy=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==25)
                tf++;
            else if(a[i]==50)
            {
                if(tf<1)
                {
                    c=0;
                    break;
                }
                else
                {
                    tf=tf-1;
                    fy=fy+1;
                }
            }
            else if(a[i]==100)
            {
                if(tf>=1&&fy>=1)
                {
                    tf=tf-1;
                    fy=fy-1;
                }
                else if(tf>=3)
                {
                    tf=tf-3;
                }
                else
                {
                    c=0;
                    break;
                }
            }


        }
        if(c==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
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
