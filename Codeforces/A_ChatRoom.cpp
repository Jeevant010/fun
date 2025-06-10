#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin>>s;
    
    int i, n = s.length();
    for (i = 0; i < n; i++){
        if(s[i] == 'h') {
            t += s[i++];
            break;
        }
    }
    for (; i < n; i++){
        if(s[i] == 'e') {
            t += s[i++];
            break;
        }
    }
    for (; i < n; i++){
        if(s[i] == 'l') {
            t += s[i++];
            break;
        }
    }
    for (; i < n; i++){
        if(s[i] == 'l') {
            t += s[i++];
            break;
        }
    }
    for (; i < n; i++){
        if(s[i] == 'o') {
            t += s[i++];
            break;
        }
    }
    cout<<t;
    if(t == "hello") cout<<"YES";
    else cout<<"NO";
}