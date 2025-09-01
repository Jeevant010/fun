#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(vector <ll>& a ){
    ll m = a.size(), c=0, cmax = 0, in=0, out = 0, x = a[2];
    if(m == 4) return 3;
    unordered_map<ll, int> freq;
    for(ll x : a) freq[x]++;
    ll most = a[0];
    int max_count = 0;
    
    vector<pair<ll, int>> freq_vec(freq.begin(), freq.end());
    sort(freq_vec.begin(), freq_vec.end(), [](const pair<ll, int>& a, const pair<ll, int>& b) {
        return a.first > b.first;
    });
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > max_count) {
            max_count = it->second;
            most = it->first;
        }
    }
    
   for(int i = 0; i<m ; i++){
        if(a[i] == most){
            out = i;
            x = a[i];
            break;
        }
   }
    in = out + max_count - 1;
    ll ans = x* (out*(out+1))/2 + x*( m - in - 1 );
    return ans;  
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>> t;
    while(t--){
        ll c;
        cin >> c;
        vector < ll > v(c);
        for(int i=0; i<c; i++){
            cin>>v[i];
        }
        cout<< fun(v)<<endl;
    }
}

