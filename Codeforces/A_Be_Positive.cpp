#include<bits/stdc++.h>
using namespace std;

int resolve(vector<double>& arr) {
    int n = arr.size();
    int ans = 0;
    int neg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            ans += 1;
        }
        if(arr[i] < 0) {
            neg += 1;
        }
    }
    if(n % 2 != 0) n++;

    if(ans >= (n/2) ){
        return (n/2);
    } 
    else if(neg >= (n/2)){
        return (n/2)*(-1) ;
    }
    else return 0;
}

int main() {
    int a;
    cin >> a;
    vector<double> arr(a);
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    cout<<resolve(arr);

}

