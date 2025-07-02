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
    ll n;
    cin>>n;
    v <string > s(n);
    r(i,n){
        cin>>s[i];
    }
    char t = s[0][0];
    char p = s[0][1];
    char m = s[1][0];
    if( n>1 && (p != m || t == m) ) {
        cout<<"NO";
        return 0;
    }

    r(i,n){
        r(j,n){
            if( i == j || i + j == n-1) {
                if(t != s[i][j] ){
                    cout<<"NO";
                    return 0;
                } 
            }
            else{
                if( p != s[i][j] ){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
}
