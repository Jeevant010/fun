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
     long int i,j,f,n,m,x,p,fnd;
    string s;
    getline(cin,s);
        f=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                fnd=i;
                p=1;
                break;
            }
        }
        if(p==1)
        {
            for(j=fnd+2; j<s.size(); j++)
            {
                if(s[j]=='B'&&s[j+1]=='A')
                {
                    f=1;
                    break;
                }
            }
        }

        if(f==0)
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='B'&&s[i+1]=='A')
                {
                    fnd=i;
                    p=2;
                    break;
                }
            }
            if(p==2)
            {
                for(j=fnd+2; j<s.size(); j++)
                {
                    if(s[j]=='A'&&s[j+1]=='B')
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==1)
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
