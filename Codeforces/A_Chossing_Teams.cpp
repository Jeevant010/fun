#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, c = 0;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        if( 5 - v[i]  >= m ) c++;
    }
    if(n<3) {
        cout<<0;
        return 0;
    }
    cout<<c/3;
}
