#include<bits/stdc++.h>
using namespace std;


int main() {
    int l, r, a;
    cin >> l >> r >> a;

    int diff = abs(l - r);
    int use = min(diff, a);

    if (l < r) l += use;
    else r += use;
    a -= use;

    int pairs = min(l, r);
    pairs += a / 2;

    cout << pairs * 2 << endl;
    return 0;
}


// int LRA(int n, int m, int a){
//     int k = abs(n-m);
//     if( n > m){
//         a = a - k;
//         if(a < 0){
//             return n + a/2;
//         }
//         else if( a == 0){
//             return n;
//         }
//         else if( a > 0 && a < k){
//             return n + a/2;
//         }
//         else {
//             return m + a/2;
//         }
//     }
//     else if( n < m){
//         a = a - k;
//         if(a < 0){
//             return m + a/2;
//         }
//         else if( a == 0){
//             return m;
//         }
//         else if( a > 0 && a < k){
//             return m + a/2;
//         }
//         else {
//             return n + a/2;
//         }
//     }
//     else{
//         return n + a/2;
//     }
// }               

// int main(){
//     int n,m,a;
//     cin>>n>>m>>a;

//     cout<<LRA(n,m,a)<<endl;

// }