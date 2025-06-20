#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,e,o;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i] % 2 == 0) e = i;
        else o = i;
    }
    int a =0,  b=0;
    for(int i=0; i<3; i++){
        if(v[i] % 2 == 0) a++;
        else b++;
    }

    if(a>b) cout<<o+1;
    else cout<<e+1;
    
}
