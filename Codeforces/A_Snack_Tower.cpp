#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

bool findItem(int snacks[], int num, int size) {
    for (int i = 0; i < size; i++)
    {
        if (snacks[i] == num)
        {
            return true;
        }
    }

    return false;
}

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
    unsigned int n, nTmp, snack, iterator = 0;
    cin >> n;
    int tmp[n];
    nTmp = n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> snack;

        if (snack != nTmp)
        {
            tmp[iterator] = snack;
            iterator++;
            cout << "\n";
        } else 
        {
            cout << snack << " ";
            nTmp--;
            while(0 != nTmp) {
                if (findItem(tmp, nTmp, iterator))
                {
                    cout << nTmp << " ";
                    nTmp--;
                } else 
                {
                    break;
                }
            }
            cout << "\n";
        }
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
