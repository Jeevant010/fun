#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ,m;
    cin >> n ;
    m = 2*n;
    vector<int> a(m);
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    int max1 = *max_element(a.begin(), a.end());
    int min1 = *min_element(a.begin(), a.end());
    if(max1 == min1){
        cout<< -1 ;
        return 0;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < m; i++) {
        cout << a[i]<<" ";
    }
}