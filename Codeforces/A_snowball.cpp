#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    ll a, n, a1, b1, a2, b2;
    cin>>a>>n>>a1>>b1>>a2>>b2;
    while(n){
        a+= n;
        if(n == b1 ){
            a -= a1;
        }
        else if(n == b2){
            a -= a2;
        }
        n--;
        if(a < 0){
            a=0;
        }
    }
    cout<<a<<endl;
}