#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vector<int> k = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin>>n;
    int i=0;
    bool f = false;
    while(k[i] <= n){
        if(n % k[i] == 0 ){
            f = true;
            break;
        }
        i++;
    }
    if(f) cout<<"YES";
    else cout<<"NO";
}