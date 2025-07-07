// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define r(i,n) for(ll i=0; i<n; i++)
// #define trvs(a) a.begin(), a.end()
// #define v vector
// #define p pair
// #define m unordered_map

// ll og2(ll x){
//     return (64 - __builtin_clzll(x) - 1);
// }

// void fun(){
//     ll n;
//     bool f = false;
//     cin>>n;
//     v <int> a(n);
//     v <int> b(n);
//     r(i,n){
//         cin>>a[i];
//         b[i] = a[i];
//     }
//     sort(trvs(b));
//     r(i,n){
//         if(a[i] == b[i]){
//             f = true;
//             break;    
//         }
//     }
//     if( f ) cout<<"NO";
//     else {
//         cout<<"Yes"<<endl;
//         cout<<n<<endl;
//         r(i,n){
//             cout<<a[i]<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         fun();
//     }
// }

#include <bits/stdc++.h>
using namespace std;

// Function to check if array b is a derangement
bool is_derangement(const vector<int>& b) {
    vector<int> c = b;
    sort(c.begin(), c.end());
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == c[i])
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        // If only 1 element, impossible
        if (n == 1) {
            cout << "NO\n";
            continue;
        }

        // Copy and sort
        vector<int> b = a;
        sort(b.begin(), b.end());

        // Try to make derangement by rotating sorted array
        vector<int> deranged(b.size());
        for (int i = 0; i < b.size(); ++i) {
            deranged[i] = b[(i+1)%b.size()];
        }

        // Now, to preserve order, we need to map back to original a
        // Let's try to greedily select elements from a to form a derangement
        // We'll use a frequency map to track available elements
        map<int, int> freq;
        for (int x : a) freq[x]++;

        vector<int> res;
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        // Try all possible sizes from n down to 2
        bool found = false;
        for (int k = n; k >= 2 && !found; --k) {
            // For each k, try to get the first k elements of a
            vector<int> sub(a.begin(), a.begin()+k);
            vector<int> sorted_sub = sub;
            sort(sorted_sub.begin(), sorted_sub.end());

            // Try to derange sorted_sub
            vector<int> der_sub = sorted_sub;
            bool ok = true;
            for (int i = 0; i < k; ++i) {
                if (der_sub[i] == sorted_sub[i]) {
                    if (i == k-1) {
                        ok = false;
                        break;
                    }
                    swap(der_sub[i], der_sub[i+1]);
                }
            }
            if (!ok) continue;

            // Now, try to map der_sub to sub preserving order in a
            // We'll use a multiset to pick elements from sub
            multiset<int> ms(sub.begin(), sub.end());
            vector<int> candidate;
            int idx = 0;
            for (int i = 0; i < a.size() && candidate.size() < k; ++i) {
                if (ms.count(der_sub[idx]) && a[i] == der_sub[idx]) {
                    candidate.push_back(a[i]);
                    ms.erase(ms.find(a[i]));
                    idx++;
                }
            }
            // If we managed to pick k elements
            if (candidate.size() == k && is_derangement(candidate)) {
                cout << "YES\n";
                cout << k << '\n';
                for (int x : candidate) cout << x << ' ';
                cout << '\n';
                found = true;
                break;
            }
        }
        if (!found) cout << "NO\n";
    }
    return 0;
}

// both are correct 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << "NO\n";
        } else {
            bool found = false;
            for (int i = 0; i < n - 1; ++i) {
                if (a[i] > a[i + 1]) {
                    cout << "YES\n";
                    cout << "2\n";
                    cout << a[i] << " " << a[i + 1] << '\n';
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
