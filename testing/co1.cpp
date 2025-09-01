#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


void fun(){
    int n;
    cin>>n;
    
    if(n % 4 == 0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--) fun();
}