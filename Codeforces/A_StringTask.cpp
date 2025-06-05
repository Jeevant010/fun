#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;

    string res = "";
    for (int i = 0, l = s.length(); i < l; i++){
        char c = tolower(s[i]);
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
            res += '.';
            res += c;
        }
    }
    cout << res << endl;
}