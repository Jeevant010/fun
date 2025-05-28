#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(n % 2 != 0){
        cout<<"contest"<<endl;
        return 0;
    }
    else {
        cout<<"home"<<endl;
    }
}