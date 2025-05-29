#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == 'A' ){
            if(i > 0 && s[i-1] == 'B') {
                if(i > 1 && s[i-2] == 'C') {
                    cout << "Yes" << endl;
                    return 0;
                }
                else if(i < s.size() - 1 && s[i+1] == 'C') {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(i > 0 && s[i-1] == 'C') {
                if(i > 1 && s[i-2] == 'B') {
                    cout << "Yes" << endl;
                    return 0;
                }
                else if(i < s.size() - 1 && s[i+1] == 'B') {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(i < s.size() - 1 && s[i+1] == 'B') {
                if(i < s.size() - 2 && s[i+2] == 'C') {
                    cout << "Yes" << endl;
                    return 0;
                }
                else if(i > 0 && s[i-1] == 'C') {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            else if(i < s.size() - 1 && s[i+1] == 'C') {
                if(i < s.size() - 2 && s[i+2] == 'B') {
                    cout << "Yes" << endl;
                    return 0;
                }
                else if(i > 0 && s[i-1] == 'B') {
                    cout << "Yes" << endl;
                    return 0;
                }   
            }
        }
    }
    cout << "No" << endl;
}