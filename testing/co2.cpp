#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


void fun(){
    int n, m , k, c=0, s=0 ;
    cin >> n >> m >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ma = *max_element(a.begin(), a.end());
        
        int l = a[m-1];

        if(l == ma) {
            if( k>=1 ) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
            return;
        }
        
        if( k >= 2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
}

int main(){
    int t;
    cin>>t;
    while(t--) fun();
}