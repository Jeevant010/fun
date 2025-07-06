#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map
//using dp


int main(){
    int n;
    cin>>n;
    r(i,n){
        int curr = 1;
        for(int j=0; j<=i; j++){
            cout<<curr<<" ";
            curr = curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
}



// int main(){
//     int n=5;
//     r(i,n){
//         for(int j=0; j<n; j++){
//             if( i<n ) {
//                if(n-i-1 <= j && n+i-1 >= j) cout<<"*";
//                else cout<<" ";
//             }
//         }
//         for(int j=n-1; j>0; j--){
//             if(n-i <= j && n+i >= j) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i = n-1; i>0; i--){
//         for(int j=0; j>n; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<n-1; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n = 5;

//     for (int i = 1; i < 2 * n; i++) {
//         for (int j = 1; j < 2 * n; j++) {
//             int a = i;
//             int b = j;
//             if (a > n) a = 2 * n - i;
//             if (b > n) b = 2 * n - j;
//             int x = min(a, b);
//             cout << n - x << " ";
//         }
//         cout << endl;
//     }

// }