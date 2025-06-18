#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n>= 0){
        cout<<n;
        return 0;
    }
    n = n*(-1);
    string a = to_string(n), p = "", q = "";
    if(a.length() == 1) {
        cout<<0;
        return 0;
    }
    for (int i = 0, count = a.length(); i < count; i++)
    {
        if(i != count-1) {
            p += a[i];
        }

        if(i != count-2){
            q += a[i];
        }
    }
    if( stoi(q) < stoi(p)) cout<<stoi(q)*(-1);
    else cout<<stoi(p)*(-1);
    
}