/*
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠁⠙⠉⠘⠁⠑⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⠀⠀⠀⠀⠀⠀⠀⠈⠉⠙⠻⢿⣿⣿⣿⣿⣿ 
⣿⣿⣿⣿⣿⣿⣿⡏⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣢⣶⣶⣾⣶⣦⣄⠀⠀⠀⠀⠀⠻⢿⣿⣿⣿⠀
⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢸⣟⠻⠿⢿⣿⣿⡿⠀⠀⠀⠀⠀⠀⢋⢿⡿⣿⠀
⣿⣿⣿⣟⣟⣺⣁⠾⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⡟⠄⡱⣮⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⢿⣽⣿⠀
⣿⡟⣻⣸⡟⡼⠷⣦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⡛⠟⣿⣾⣿⣿⣿⡿⠀⢀⡀⠀⠀⠀⠀⢠⣿⣿⣿⠀
⣿⣿⣷⣤⣵⢁⣈⠀⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠠⠈⠲⣿⣿⣿⣿⡿⠃⢰⡟⣹⡏⠄⠀⠄⣿⣿⣿⣿⠀
⣿⣿⠾⣿⣿⡎⠁⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⣰⣇⢸⡟⠙⠋⠀⠠⠻⣷⡯⢡⣠⡾⣸⣿⣿⣿⣿⠀
⣿⣿⣗⡈⠉⠁⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⠀⠁⠀⠀⠀⠀⠀⣀⣾⣿⡗⠀⢸⣼⢇⣿⣿⣿⣿⣿⠀
⣿⣿⠁⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⢀⣤⣾⣿⣿⢿⠇⠀⢿⡀⠀⠻⣿⣿⣿⣿⠀
⣿⣿⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠛⠋⠃⠐⢺⣿⣿⣿⣿⣦⣲⡄⠀⠀⠀⠀⠈⠙⠿⢿⠀
⣿⡟⢀⠂⠀⡀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⣝⢿⣿⡿⢟⣬⡹⡀⠀⠀⠀⠀⠀⠀⠀⠀
⣿⡇⠀⡀⠈⠀⠀⢺⠻⠿⠟⠛⠋⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠈⢁⡰⠿⣯⣏⣏⡠⠀⠀⠀⠀⠀⠀⠀
⣿⣇⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠈⠐⠚⣋⠍⠱⡬⡂⠀⠀⠀⠀⠀⠀
⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡀⡀⠀⠄⠀⢘⠁⠁⣈⡀⣉⠀⣰⢳⢳⡀⠀⠀⠀⠀⢀
⣿⣿⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣢⢷⠈⠀⠈⠐⠀⠀⠀⠃⡠⣽⠦⣄⠁⠀⠀
⣿⣿⣷⣤⣄⢀⣀⣀⡀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠊⠀⠀⠀⠈⠀⠀⠀⠀⠁⠈⢴⣤⣛⡃⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣷⣤⣤⣶⣾⣿⣿⣿⣧⠀⠀⠀⠂⡆⢠⠠⠤⠄⡀⠀⣀⣀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣧⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⣀⢡⠧⡄⠀⢠⣿⡀⣇⣸⠃⠀⠀⠀⠀⠀⠀⠀⠹⢿⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠂⠀⠀⠘⢠⢠⡕⡀⣊⡈⣂⠃⠙⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀*/
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define for(i,n) for(int i=0; i<n; i++)

// ll fact(int n) {
//     ll result = 1;
//     for (i,n) result *= i;
//     return result;
// }

// void fac(ll n, ll m){
//     ll c =  63 - __builtin_clzll(n+1);
//     ll p1 = 0, p2 = 0;
//     for(i,c){
//         p1 += i*pow(2,i);
//     }
//     p1 += (n-pow(2,c)+1)*c;
//     p2 = fact(n);
//     if(m >= p1 || m <= p2){

//     }
//     else {
//         cout<<-1;
//         return;
//     }
// }
 
// int main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     ll t=1;
//     cin>> t;
//     while(t--){
//         ll a ,b;
//         cin>>a>>b;
//         fac(a, b);
//     }
// }



// // if (m < n) {
//     //         cout << "-1\n";
//     //         return;
//     //     }

//     //     if (m == n) {
//     //         cout << "1\n";
//     //         for (long long i = 2; i <= n; i++) {
//     //             cout << i-1 << " " << i << "\n";
//     //         }
//     //         return;
//     //     }

//     //     if (m == 2 * n - 1) {
//     //         if (n == 1) {
//     //             cout << "-1\n";
//     //             return;
//     //         }
//     //         cout << "2\n";
//     //         for (long long i = 1; i <= n; i++) {
//     //             if (i == 2) continue;
//     //             cout << "2 " << i << "\n";
//     //         }
//     //         return;
//     //     }

//     //     long long low = 3 * n - 3;
//     //     long long high = 4 * n - 5;
//     //     if (m >= low && m <= high) {
//     //         long long k = 4 * n - 5 - m;
//     //         if (k >= 0 && k <= n - 2) {
//     //             vector<long long> available;
//     //             for (long long i = 2; i < n; i++) {
//     //                 available.push_back(i);
//     //             }
//     //             vector<long long> branchA;
//     //             vector<long long> branchB;
//     //             if (k > 0) {
//     //                 branchA = vector<long long>(available.begin(), available.begin() + k);
//     //             }
//     //             if (k < available.size()) {
//     //                 branchB = vector<long long>(available.begin() + k, available.end());
//     //             }

//     //             cout << n << "\n";
//     //             vector<pair<long long, long long>> edges;

//     //             if (branchA.size() == 0) {
//     //                 edges.push_back({n, 1});
//     //             } else {
//     //                 edges.push_back({n, branchA[0]});
//     //                 for (long long i = 1; i < branchA.size(); i++) {
//     //                     edges.push_back({branchA[i-1], branchA[i]});
//     //                 }
//     //                 edges.push_back({branchA[branchA.size()-1], 1});
//     //             }

//     //             if (branchB.size() > 0) {
//     //                 edges.push_back({n, branchB[0]});
//     //                 for (long long i = 1; i < branchB.size(); i++) {
//     //                     edges.push_back({branchB[0], branchB[i]});
//     //                 }
//     //             }

//     //             for (auto &e : edges) {
//     //                 cout << e.first << " " << e.second << "\n";
//     //             }
//     //             return;
//     //         }
//     //     }

//     //     cout << "-1\n";

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    if (m < n) {
        cout << "-1\n";
        return;
    }

    if (m == n) {
        cout << "1\n";
        for (long long i = 2; i <= n; i++) {
            cout << i - 1 << " " << i << "\n";
        }
        return;
    }

    if (m == 2 * n - 1) {
        if (n == 1) {
            cout << "-1\n";
            return;
        }
        cout << "2\n";
        for (long long i = 1; i <= n; i++) {
            if (i == 2) continue;
            cout << "2 " << i << "\n";
        }
        return;
    }

    long long low = 3 * n - 3;
    long long high = 4 * n - 5;
    if (m >= low && m <= high) {
        long long k = 4 * n - 5 - m;
        if (k >= 0 && k <= n - 2) {
            vector<long long> available;
            for (long long i = 2; i < n; i++) {
                available.push_back(i);
            }
            vector<long long> branchA;
            vector<long long> branchB;
            if (k > 0) {
                branchA = vector<long long>(available.begin(), available.begin() + k);
            }
            if (k < available.size()) {
                branchB = vector<long long>(available.begin() + k, available.end());
            }

            cout << n << "\n";
            vector<pair<long long, long long>> edges;

            if (branchA.size() == 0) {
                edges.push_back({n, 1});
            } else {
                edges.push_back({n, branchA[0]});
                for (long long i = 1; i < branchA.size(); i++) {
                    edges.push_back({branchA[i - 1], branchA[i]});
                }
                edges.push_back({branchA[branchA.size() - 1], 1});
            }

            if (branchB.size() > 0) {
                edges.push_back({n, branchB[0]});
                for (long long i = 1; i < branchB.size(); i++) {
                    edges.push_back({branchB[0], branchB[i]});
                }
            }

            for (auto &e : edges) {
                cout << e.first << " " << e.second << "\n";
            }
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}    