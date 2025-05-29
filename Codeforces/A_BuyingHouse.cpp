#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m , k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int s = 0;
    m--;
    for(int i = 1; i < n; i++) {
        if( m+i < n){
            if( a[m+i] != 0 && a[m + i] <= k ) {
                s = m + i;
                break;
            }
        }
        if(m-i >= 0){
            if( a[m-i] != 0 && a[m-i] <= k ) {
                s = m - i;
                break;
            }
        }
    }
    if(s > m) {
        cout << (s - m)*10 << endl;
    } else {
        cout << (m - s)*10 << endl;
    }
}