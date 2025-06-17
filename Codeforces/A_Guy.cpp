#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m;
    vector<int> v(m);
    set<int> s;
    for(int i=0; i<m; i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    cin>>q;
    vector<int> p(q);
    for(int i=0; i<q; i++){
        cin>>p[i];
        s.insert(p[i]);
    }
    if(s.size() == n ) {
        cout<<"I become the guy.";
        return 0;
    }
    else{
        cout<<"Oh, my keyboard!";
        return 0;
    }
}