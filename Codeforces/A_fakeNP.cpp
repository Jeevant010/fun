#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m ;
    cin >> n >> m ;
    if( m - n >= 1){
        cout << 2;
        return 0;
    }
    if( m - n == 0){
        cout << m;
        return 0;
    }
}