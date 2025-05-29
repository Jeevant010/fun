#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m; 
    cin >> n >> m;
    vector<vector<char>> a(n,vector<char>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(a[i][j] == 'W') {
                if(i > 0 && a[i-1][j] == 'S') {
                    cout << "No" << endl;
                    return 0;
                }
                if(i < n-1 && a[i+1][j] == 'S') {
                    cout << "No" << endl;
                    return 0;
                }
                if(j > 0 && a[i][j-1] == 'S') {
                    cout << "No" << endl;
                    return 0;
                }
                if(j < m-1 && a[i][j+1] == 'S') {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(a[i][j] == 'S') {
                for(ll k = 0; k < n; k++) {
                    if(a[k][j] == '.') a[k][j] = 'D';
                }
                for(ll k = 0; k < m; k++) {
                    if(a[i][k] == '.') a[i][k] = 'D';
                }
            }
        }
    }
    cout << "Yes" << endl;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}