#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i,n) for(int i=0; i<n; i++)

// void fac( int l1, int b1, int l2, int b2, int l3, int b3){
//     vector<pair<long long, long long>> rects;
//         rects.push_back({l1, b1});
//         rects.push_back({l2, b2});
//         rects.push_back({l3, b3});
//         long long total = l1 * b1 + l2 * b2 + l3 * b3;
//         long long s = sqrt(total);
//         if (s * s != total) {
//             cout << "NO" << endl;
//             return;
//         }
//         vector<int> perm = {0, 1, 2};
//         bool found = false;
//         do {
//             pair<long long, long long> A = rects[perm[0]];
//             pair<long long, long long> B = rects[perm[1]];
//             pair<long long, long long> C = rects[perm[2]];
//             if (A.second == s && B.second == s && C.second == s) {
//                 if (A.first + B.first + C.first == s) {
//                     found = true;
//                     break;
//                 }
//             }
//             if (A.first == s && B.first == s && C.first == s) {
//                 if (A.second + B.second + C.second == s) {
//                     found = true;
//                     break;
//                 }
//             }
//             if (A.second == B.second) {
//                 if (A.first + B.first == s) {
//                     if (C.first == s && C.second == s - A.second) {
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//             if (A.first == s) {
//                 if (B.second == C.second && B.second == s - A.second) {
//                     if (B.first + C.first == s) {
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//             if (A.first == B.first) {
//                 if (A.second + B.second == s) {
//                     if (C.second == s && C.first == s - A.first) {
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//             if (A.second == s) {
//                 if (B.first == C.first && B.first == s - A.first) {
//                     if (B.second + C.second == s) {
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//         } while (next_permutation(perm.begin(), perm.end()) && !found);
//         cout << (found ? "YES" : "NO") << endl;
// }
 
void fac(  int l1, int b1, int l2, int b2, int l3, int b3 ){
    if(l1 > b1) {
        if(l2 == l1 && l3 == l1 && b2+b3+b1 == l1) cout<<"YES";
        else if(l2 + l3 == l1 && b1 + b2 == l1 && b2 == b3) cout<<"YES";
        else cout<<"NO";
    }
    else {
        if(b2 == b1 && b3 == b1 && l2+l3+l1 == b1) cout<<"YES";
        else if(b2 + b3 == b1 && l1 + l2 == b1 && l2 == l3) cout<<"YES";
        else cout<<"NO";
    }
    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        int a ,b, x1, x2, y1, y2;
        cin>>a>>b>>x1>>x2>>y1>>y2;
        fac(a, b, x1, x2, y1, y2);
    }
}