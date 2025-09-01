#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<tuple<int, int, int>> ops;

        if (n >= 2) {
            ops.push_back(make_tuple(1, 2, n));
        }

        for (int i = 1; i <= n-2; i++) {
            ops.push_back(make_tuple(i+1, 1, i+1));
            if (i+2 < n) {
                ops.push_back(make_tuple(i+1, i+2, n));
            }
        }

        if (n >= 1) {
            ops.push_back(make_tuple(n, 1, n));
        }

        cout << ops.size() << '\n';
        for (auto op : ops) {
            int i = get<0>(op);
            int l = get<1>(op);
            int r = get<2>(op);
            cout << i << " " << l << " " << r << '\n';
        }
    }
    return 0;
}