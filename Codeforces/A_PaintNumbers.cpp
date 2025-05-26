// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     vector<int> p;
//     for(int i=2; i<100;i++){
//         bool flag = true;
//         for(int j=2; j<i ; j++){
//             if( i%j == 0 && i!=j)  flag = false;
//         }
//         if(flag){
//             p.push_back(i);
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<p.size(); j++){
//             if(a[i] % p[j] == 0){
//                 a[i] = p[j];
//                 break;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     set<int> s;
//     for(int i=0; i<n; i++){
//         s.insert(a[i]);
//     }
//     for(auto it : s){
//         cout << it << " ";
//     }
//     cout << endl;
//     cout << s.size() << endl;

// }

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n, a, one = 0;

    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        if(a == 1)one++;
    }
    sort(v.begin(),v.end());
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    int ans = 0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[j] % v[i] == 0){
                v.erase(v.begin()+j);
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[j] % v[i] == 0){
                v.erase(v.begin()+j);
            }
        }
    }
    if(one > 0){
        cout<<1<<endl;
    }
    else{
        cout<<v.size()<<endl;
    }
    cout<<endl;
}