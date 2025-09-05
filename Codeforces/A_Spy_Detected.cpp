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
    ll n;
    cin>>n;
    v<int> b(n);
    r(i,n) cin>>b[i];
    for (int i = 1; i < n-1; i++){
        if( b[i] == b[i-1] && b[i+1] == b[i]) continue;
        else if( b[i] == b[i-1] && b[i+1] != b[i]) {
            cout<<i+2<<"\n";
            return;
        }
        else if( b[i] == b[i+1] && b[i-1] != b[i]) {
            cout<<i<<"\n";
            return;
        }
        else if( b[i+1] == b[i-1] && b[i+1] != b[i]) {
            cout<<i+1<<"\n";
            return;
        }
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin>>t;
    while( t-- ){
        solve();
    }
    return 0;
}


// import java.util.StringTokenizer

// fun gcd(a: Long, b: Long): Long {
//     return if (b == 0L) a else gcd(b, a % b)
// }

// fun lcm(a: Long, b: Long): Long {
//     return kotlin.math.abs(a * b) / gcd(a, b)
// }

// fun og2(x: Long): Int {
//     return 64 - java.lang.Long.numberOfLeadingZeros(x) - 1
// }

// fun solve(n: Int, b: List<Int>) {
//     for (i in 1 until n - 1) {
//         if (b[i] == b[i - 1] && b[i + 1] == b[i]) {
//             continue
//         } else if (b[i] == b[i - 1] && b[i + 1] != b[i]) {
//             println(i + 2)
//             return
//         } else if (b[i] == b[i + 1] && b[i - 1] != b[i]) {
//             println(i)
//             return
//         } else if (b[i + 1] == b[i - 1] && b[i + 1] != b[i]) {
//             println(i + 1)
//             return
//         }
//     }
// }

// fun main() {
//     val br = System.`in`.bufferedReader()
//     val t = br.readLine().trim().toInt()
//     repeat(t) {
//         val n = br.readLine().trim().toInt()
//         val st = StringTokenizer(br.readLine())
//         val b = MutableList(n) { st.nextToken().toInt() }
//         solve(n, b)
//     }
// }
