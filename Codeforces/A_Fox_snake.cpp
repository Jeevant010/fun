#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=m; j++){
            if(i%2 == 1){
                cout<<'#';
            }
            else if(i%4 == 0 && j == 1) {
                cout<<'#';
            }
            else if((2+i)%4 == 0 && j == m) {
                cout<<'#';
            }
            else cout<<'.';
        }
        cout<<endl;
    }
}
