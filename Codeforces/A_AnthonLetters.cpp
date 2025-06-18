#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin.ignore();
    getline(cin, s);
    set<char> se;
    for(int i=0, n = s.size(); i<n-1; i++){
        if(s[i] >= 97 && s[i]<=122) se.insert(s[i]);
    }
    cout << se.size() << endl;
}