#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    //     vector<ll> drop(n);
    //     drop[0] = a[0];
    //     for (int i = 1; i < n; i++) {
    //         drop[i] = min(drop[i-1], a[i]);
    //     }

    //     ll total_old = 0;
    //     for (ll num : drop) {
    //         total_old += num;
    //     }

    //     int L = 1;
    //     for (int i = 1; i < n; i++) {
    //         if (drop[i] < drop[i-1] && drop[i] == a[i]) {
    //             L = i+1;
    //         } else {
    //             break;
    //         }
    //     }

    //     vector<ll> tail_sum(n+1, 0);
    //     for (int i = n-1; i >= 0; i--) {
    //         tail_sum[i] = drop[i] + tail_sum[i+1];
    //     }

    //     vector<int> no_drop(n, 0);
    //     for (int i = 1; i < n; i++) {
    //         if (drop[i] == drop[i-1]) {
    //             no_drop[i] = 1;
    //         }
    //     }

    //     vector<ll> prefix_no_drop(n+1, 0);
    //     for (int i = 1; i <= n; i++) {
    //         prefix_no_drop[i] = prefix_no_drop[i-1] + (i-1 < n ? no_drop[i-1] : 0);
    //     }

    //     ll candidate = total_old;

    //     for (int j = 1; j < n; j++) {
    //         if (j >= 2 && (prefix_no_drop[j] > 0)) {
    //             candidate = min(candidate, total_old - tail_sum[j]);
    //         } else {
    //             if (j < L) {
    //                 set<int> i_candidates;
    //                 i_candidates.insert(0);
    //                 for (int i = max(0, j-5); i < j; i++) {
    //                     i_candidates.insert(i);
    //                 }
    //                 for (int i : i_candidates) {
    //                     ll X;
    //                     if (i == 0) {
    //                         X = a[0] + a[j];
    //                     } else {
    //                         X = min(drop[i-1], a[i] + a[j]);
    //                     }

    //                     ll new_seg_sum = X;
    //                     ll current = X;
    //                     for (int k = i+1; k < j; k++) {
    //                         current = min(current, a[k]);
    //                         new_seg_sum += current;
    //                     }

    //                     ll old_seg_sum = tail_sum[i] - tail_sum[j];
    //                     ll F_val = new_seg_sum - old_seg_sum;
    //                     ll new_total = total_old - tail_sum[j] + F_val;
    //                     candidate = min(candidate, new_total);
    //                 }
    //             }
    //         }
    //     }

    //     cout << candidate << '\n';
    // }

    cout<<a[0] + min(a[0], a[1])<<endl;
}
}