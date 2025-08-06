#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSquares(int n) {
        queue<int> q;
        unordered_set<int> v;
        int l = 0;
        q.push(n);
        v.insert(n);

        while (!q.empty()) {
            int s = q.size();
            l++;

            for (int i = 0; i < s; i++) {
                int cur = q.front();
                q.pop();

                for (int j = 1; j * j <= cur; j++) { 
                    int na = cur - j * j;
                    if (na == 0) return l;

                    if (v.find(na) == v.end()) {
                        q.push(na);
                        v.insert(na);
                    }
                }
            }
        }
        return l;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Minimum number of perfect squares: " << sol.numSquares(n) << endl;
    return 0;
}
