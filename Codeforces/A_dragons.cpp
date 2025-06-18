#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin>>n>>m;
    bool f = true;
    vector<vector<int> > v(m, vector<int>(2));
    
    for(int i=0; i<m; i++){
        for(int j=0; j<2; j++){
            cin >> v[i][j];
        }
    }
    
    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b){
        return a[0] < b[0];
    });
    
    for(int i=0; i<m; i++){
        if(n > v[i][0]){
            n += v[i][1];
        } else {
            f = false;
            break;
        }
    }
    
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}