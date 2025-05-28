#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        ll odda=0, oddb=0, evena=0, evenb=0;
        cin >> n;
        vector<ll> a;
        for(ll i = 0; i < n; i++){
            int x ;
            cin >> x;
            a.push_back(x);
            if(x % 2 == 0) {
                evena++;
            } else {
                odda++;
            }
        }
        cin >> m;
        vector<ll> b;
        for(ll i = 0; i < m; i++){
            int x ;
            cin >> x;
            b.push_back(x);
            if(x % 2 == 0) {
                evenb++;
            } else {
                oddb++;
            }
        }
        cout << odda * oddb + evena * evenb << endl;
    }
}