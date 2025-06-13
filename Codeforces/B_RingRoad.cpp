#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n,m;
    cin>>n>>m;
    vector <int> v(m+1);
    for(int i=1; i <=  m; i++){
        cin>>v[i];
    }
    int t = 1, s=0;
    for(int i=1; i <= m; i++){
        if(t <= v[i]){   
            s += v[i] - t;
            t = v[i];
        }
        else{
            s += n - t + v[i] ;
            t = v[i];
        }
    }
    cout<<s<<endl;
}