#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    vector<int> p(n+1);
    for(int i=0; i<=n; i++){
        p[v[i]] = i; 
    }
    for(int i=1; i<=n; i++){
        cout<<p[i]<<" ";
    }
}