#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map


void fun(){
    int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> prefix_min(n);
        prefix_min[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefix_min[i] = min(prefix_min[i - 1], a[i]);
        }

        vector<int> suffix_max(n);
        suffix_max[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix_max[i] = max(suffix_max[i + 1], a[i]);
        }

        string res = "";
        for (int i = 0; i < n; i++) {
            if (a[i] == prefix_min[i] || a[i] == suffix_max[i]) {
                res += '1';
            } else {
                res += '0';
            }
        }

        cout << res << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) fun();
}