#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define trvs(a) a.begin(), a.end()
#define v vector
#define p pair
#define m unordered_map
#define INF 1e9

ll gcd(ll a, ll b){
    if( b>a ) swap(a,b);
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b ){
    return abs(a * b) / gcd(a, b);
}

ll og2(ll x){
    return (64 - __builtin_clzll(x) - 1);
}

        int a[100000];

void solve() {
    string s1;
    char c;
    cin>>c;
    cin>>s1;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string answer;
    int len=s1.length();
    for(int i=0;i<len;i++){
        int index=s.find(s1[i]);
        if(c=='R'){
            answer+=s[index-1];
        
        }
        else{
                answer+=s[index+1];
        }
        
    }
        cout<<answer<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    while (t--) {
        solve();
    }
    
    return 0;
}
 
 