// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define r(i,n) for(int i=0; i<n; i++)
// #define v vector
// #define p pair
// #define m unordered_map


// void fun(int n){
//     v<int> l(n);
//     bool f = false;

//     r(i, n) {
//         cin >> l[i];
//         if(i < n-1 && abs(l[i] - l[i+1]) <= 1)
//             f = true;
//     }

//     if(f) {
//         cout << 0 << endl;
//         return;
//     }
//         int c=0;
//         for(int i=1; i<n; i++){
//             int a2 = l[i], a1 = l[i-1];
//             if(a2 > a1) swap(a2, a1);
//             for(int j=l[i+1]-1; j<=l[i+1]+1; j++){
//                 if( j <= a1 && j >= a2){
//                     l.erase(l.begin() + i);
//                     l.erase(l.begin() + (i - 1));
//                     l.insert(l.begin() + (i - 1), j);
//                     c++;
//                     break;
//                 }
//             }
//         }
//         if(l.size() >= 2) cout<<c<<endl;
//         else cout<<-1<<endl;
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         fun(n);
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool found0 = false;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                results.push_back(0);
                found0 = true;
                break;
            }
        }
        if (found0) continue;

        bool found1 = false;
        for (int i = 0; i < n - 1; ++i) {
            int L = min(a[i], a[i + 1]);
            int R = max(a[i], a[i + 1]);
            bool flag = false;

            if (i > 0) {
                if (R >= a[i - 1] - 1 && L <= a[i - 1] + 1) {
                    flag = true;
                }
            }
            if (!flag && i + 2 < n) {
                if (R >= a[i + 2] - 1 && L <= a[i + 2] + 1) {
                    flag = true;
                }
            }

            if (flag) {
                results.push_back(1);
                found1 = true;
                break;
            }
        }
        if (found1) continue;

        if (n < 4) {
            results.push_back(-1);
            continue;
        }

        bool found2 = false;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 2; j < n - 1; ++j) {
                if (j == i + 2) {
                    int L1 = min(a[i], a[i + 1]);
                    int R1 = max(a[i], a[i + 1]);
                    int L2 = min(a[j], a[j + 1]);
                    int R2 = max(a[j], a[j + 1]);
                    if (R1 >= L2 - 1 && L1 <= R2 + 1) {
                        found2 = true;
                        break;
                    }
                } else {
                    int L1 = min(a[i], a[i + 1]);
                    int R1 = max(a[i], a[i + 1]);
                    if (R1 >= a[i + 2] - 1 && L1 <= a[i + 2] + 1) {
                        found2 = true;
                        break;
                    }
                    int L2 = min(a[j], a[j + 1]);
                    int R2 = max(a[j], a[j + 1]);
                    if (R2 >= a[j - 1] - 1 && L2 <= a[j - 1] + 1) {
                        found2 = true;
                        break;
                    }
                }
            }
            if (found2) break;
        }

        if (found2) results.push_back(2);
        else results.push_back(-1);
    }

    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}
