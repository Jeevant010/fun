#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    if(m>n){
        if(n % 2 == 1) cout<<"Akshat";
        else cout <<"Malvika";
    }
    else {
        if(m % 2 == 1) cout<<"Akshat";
        else cout <<"Malvika";
    }
}