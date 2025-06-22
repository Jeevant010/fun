#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i,n) for(int i=0; i<n; i++)


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    pair<int, int> m[n];
    for(i,n){
        cin>>m[i].first>>m[i].second;
    }
    sort(m, m + n);
    for(i, n-1){
        if(m[i].first < m[i+1].first && m[i].second > m[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}
