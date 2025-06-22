#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define form(i,n) for(int i=0; i<n; i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, c = 0;
    cin >> n >> m;
    vector<int> res;
    
    form(i, n){
        int k;
        cin >> k;
        vector<int> temp(k);
        bool found = false;
        
        for (int j = 0; j < k; j++) {
            cin >> temp[j];
            if (temp[j] < m) found = true;
        }

        if (found) res.push_back(i + 1);
    }

    cout << res.size() << "\n";
    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}
