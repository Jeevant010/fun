#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    int ans = min(n - 1, v);
    v = min(n - 1, v);
    for (int i = 1; i < n; i++) {
        if (n - i > v) {
        ans += i + 1;
        v++;
        }
        v--;
    }
    cout << ans << "\n";
}