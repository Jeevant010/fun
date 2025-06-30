#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=1; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, l, r, t=1, m = 0;
    cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        t += x * ((l - t) / x);
        m += r - t + 1;
        t = r + 1;
    }
    cout<<m;
}
