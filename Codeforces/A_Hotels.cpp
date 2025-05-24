#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m, ans =0;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n; i++){
        cin >> a[i];
    }
    ans = 2;
    for(int i=0; i<n-1; i++){
        if(abs(a[i] - a[i+1]) > 2*m){
            ans +=2;
        }
        else if(abs(a[i] - a[i+1]) == 2*m){
            ans++;
        }
    }
    cout << ans << endl;
}