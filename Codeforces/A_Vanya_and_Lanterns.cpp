// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define r(i,n) for(ll i=0; i<n; i++)
// #define trvs(a) a.begin(), a.end()
// #define v vector
// #define p pair
// #define m unordered_map
// #define eb emplace_back
// #define pb push_back
// #define po pop_back
// #define pq priority_queue
// #define INF 1e9

// ll gcd(ll a, ll b){
//     if( b>a ) swap(a,b);
//     return b == 0 ? a : gcd(b, a % b);
// }

// ll lcm(ll a, ll b ){
//     return abs(a * b) / gcd(a, b);
// }

// ll og2(ll x){
//     return (64 - __builtin_clzll(x) - 1);
// }

// void solve() {
//     int n, k;
//     cin>>n>>k;
//     map<int , int> st;
//     r(i,n) {
//         int x;
//         cin>>x;
//         st[x]++;
//     }
    
//     int dif = st.begin()->first; 
//     int prev = st.begin()->first;

//     for (auto [i, j] : st) {
//         if (i != prev) { 
//             dif = max(dif, i - prev);
//         }
//         prev = i;
//     }

//     cout<<std::setprecision(9)<<(float)dif/2.0<<"\n";
        
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t = 1;
//     while( t-- ){
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    map<int,int> st;
    r(i,n) {
        int x; cin >> x;
        st[x]++; 
    }

    
    int firstKey = st.begin()->first;
    int lastKey = std::prev(st.end())->first;

    
    double first = static_cast<double>(firstKey);
    
    double last = static_cast<double>(k - lastKey);

    
    int prevKey = firstKey;
    int maxGap = 0;
    for (auto it = std::next(st.begin()); it != st.end(); ++it) {
        int curKey = it->first;
        maxGap = max(maxGap, curKey - prevKey);
        prevKey = curKey;
    }

    double mid = maxGap / 2.0;               
    double res = max({ first, last, mid }); 

    cout << fixed << setprecision(9) << res << "\n";
    return 0;
}
