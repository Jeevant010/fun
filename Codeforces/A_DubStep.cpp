#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, t="";
    cin>>s;
    s += "AA";
    vector<string> m;
    for(int i=0, n = s.length()-2; i<n; i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2; 
            if( t[0] != '\0') {
                m.push_back(t);
                t = "";
            }
        }      
        else {
            t += s[i];
        }
    }
    if(t.length() != 0)m.push_back(t);
    for(int i=0, n = m.size(); i<n; i++){
        cout<<m[i]<<" ";
    }
}