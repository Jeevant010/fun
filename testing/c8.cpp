#include<bits/stdc++.h>
using namespace std;
#define ll long long

void fac(){
    ll n, s;
    cin>>n>>s;
    long long count = 0;
        // for (long long i = 0; i < n; i++) {
        //     long long dx, dy, x, y;
        //     cin >> dx >> dy >> x >> y;
        //     long long diff = x * dy - y * dx;
        //     if (diff % s == 0) {
        //         count++;
        //     }
        // }
        for(int i=0; i<n; i++) {
        int dx, dy, x, y;
        cin>>dx>>dy>>x>>y;
        if(dx*dy == -1) {
            if(x - s == -1*(y-0)) count++;
        }
        else {
            if(x == y) count++;
        }
    }
        cout << count << '\n';
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        
        fac();
    }
}