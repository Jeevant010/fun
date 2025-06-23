#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(int i=0; i<n; i++)
#define v vector
#define p pair

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    v<string> s(n);

    r(i,n) {
        cin >> s[i];
    }

    r(i,n) {
        r(j,n) {
            int p = 0;
                if(i-1 >= 0 && s[i-1][j] == 'o') p++;
                if(i+1 < n  && s[i+1][j] == 'o') p++;
                if(j-1 >= 0 && s[i][j-1] == 'o') p++;
                if(j+1 < n  && s[i][j+1] == 'o') p++;
                
                if(p % 2) {
                    cout << "NO";
                    return 0;
                }
        }
    }

    cout << "YES";
}
