#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


void fun(){
    int a, b, x, y;
    cin>>a>>b>>x>>y;
    if( b < a-1  ){
        cout<<-1<<endl;
        return;
    }
    if( b == a-1 ){
        if( a % 2 == 1 ) {
            cout<<y<<endl;
            return;
        }
        else {
            cout<<-1<<endl;
            return;
        }
    }
    int an = 0;
    while( a != b ){
        if( a % 2 == 0) an+= min(x, y);
        else an+= x ;
        a++;
    }
    cout<<an<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}
