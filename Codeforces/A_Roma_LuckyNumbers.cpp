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
    ll n, m, c=0;
    cin>>n>>m;
    string s;
    while (n--)
    {
        int l(0);
        cin >> s;
        for (size_t i = 0; i < s.length(); ++i)
        {
            if (s[i] == '4' || s[i] == '7')
            {
                l += 1;
            }
        }
        if (l <= m)
        {
            c += 1;
        }
    }
    cout << c << endl;
    
}
