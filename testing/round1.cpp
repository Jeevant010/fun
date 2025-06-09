#include<bits/stdc++.h>
using namespace std;
#define ll long long

// ll fun(ll x){
//     vector <ll> v(3,0);
//     int i = 0, j = 1, k = 0;
//     if(x == 1) return 3;
//     while(v[0] != x && v[1] != x && v[2] != x){
//         if(v[i] <= v[j]){
//             if( v[j] == 0) {
//                 v[i] = min(1LL, x);
//                 j = (j + 1) % 3;
//                 i = (i + 1) % 3;
//                 k++;
//             }
//             else{
//                 v[i] = min( v[j] * 2LL, x);
//                 j = (j+1) % 3;
//                 i = (i + 1) % 3;
//                 k++;
//             }
//         }
//     }
//     return k;
// }

ll fun(ll x){
    return 2 * (64 - __builtin_clzll(x)) + 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll c;
        cin >> c;

    
        cout<< fun(c)<<endl;
    }
}

