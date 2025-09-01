#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


void fun(){
    int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int o = count(s.begin(), s.end(), '1');
        int z = n-o;
        if (o == 0) {
            cout << "Alice\n";
            return;
        }

        if (o <= k) {
            cout << "Alice\n";
            return;
        }

        if (k == 0) {
            cout << (o ? "Bob\n" : "Alice\n");
            return;
        }

        if (k == 1) {
            if (o >= 2) {
                cout << "Bob\n";
            } else {
                cout << "Alice\n";
            }
            return;
        }
        if( n%2==0 && n/2  < k ){
            cout<<"Alice"<<endl;
            return;
        }
        else if( n%2==1 && (n+1)/2  <= k ){
            cout<<"Alice"<<endl;
            return;
        }
        else {
            cout<<"Bob"<<endl;
            return;
        }
        // if (s[0] == '1' || s[n-1] == '1') {
        //     cout << "Alice\n";
        // } else {
        //     int mamid = 0;
        //     int cur = 0;
        //     for (int i = 1; i < n-1; i++) {
        //         if (s[i] == '0') {
        //             cur++;
        //         } else {
        //             if (cur > mamid) {
        //                 mamid = cur;
        //             }
        //             cur = 0;
        //         }
        //     }
        //     if (cur > mamid) {
        //         mamid = cur;
        //     }
        //     if (mamid >= k) {
        //         cout << "Alice\n";
        //     } else {
        //         cout << "Bob\n";
        //     }
        // }
        
}

int main(){
    int t;
    cin>>t;
    while(t--) fun();
}