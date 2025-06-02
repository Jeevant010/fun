#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int j = 0;
    bool f = false;
    if(n < 6 ) {
        cout<<"No";
        return 0;
    }
    else {
        for(int i =0; i< n; i++){
            if( s[i] - '0' == 1 ) {
                f = true;
                j = i;
                break;
            }
        }
        int zero = 0;
        for( ; j < n && f == true ; j++) if( (s[j] - '0') == 0 ) {
            zero++;
            if(zero > 5) {
                cout<<"Yes";
                return 0;
            }
        }
        cout<<"No";
    }
}