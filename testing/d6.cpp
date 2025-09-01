#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

void fun(int n){
    vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = 0;
        for (int k = 2; k < n; k++) {
            long long T = max(a[n-1] - a[k], a[k]);
            int left = 0;
            int right = k - 1;
            long long cnt = 0;
            while (left < right) {
                if (a[left] + a[right] > T) {
                    cnt += (right - left);
                    right--;
                } else {
                    left++;
                }
            }
            ans += cnt;
        }
        cout << ans << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        fun(n);
    }
    
}

