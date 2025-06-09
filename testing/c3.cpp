#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fun(int n, vector<int> & a ){
    int index = 0;
    int s = 0;
    for(int i=index; i<n; i++){
        if(a[0] == a[i]) s++;
    }
    if(s == 0) return 1;
    else return s; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        cout<<fun(n,v)<<endl;
    }
}

