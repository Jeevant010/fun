#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, v;
    cin >> n >> v;
    int a = min(n - 1, v);
    v = min(n - 1, v);
    for(int i=1; i<n; i++){
        if(n-i > v){
            a += i+1;
            v++;
        }
        v--;
    }
    cout << a << endl;
}