#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define INF 1e9

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
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int l = -1, r = -1;

    // Find the first element that breaks the non-decreasing order from the left
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }

    // If l remains -1, the array is already sorted
    if (l == -1) {
        std::cout << "yes\n1 1\n";
        return ;
    }

    // Find the first element that breaks the non-decreasing order from the right
    for (int i = n - 1; i > 0; --i) {
        if (a[i] < a[i - 1]) {
            r = i;
            break;
        }
    }

    // Reverse the subsegment from l to r
    std::reverse(a.begin() + l, a.begin() + r + 1);

    // Check if the array is sorted after reversal
    bool sorted = true;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        std::cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    } else {
        std::cout << "no\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--)
        solve();
    
    return 0;
}
