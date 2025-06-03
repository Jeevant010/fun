#include<bits/stdc++.h>
using namespace std;

    #define ll long long
    class Solution {
  public:
  
    int missingNum(vector<int>& arr) {
        ll n = arr.size() +1;
        int s = 0;
        for(auto i : arr ) s += i;
        ll t = n*(n+1)/2;
        if( t == s ) return n+1;
        else return t - s ;
        
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    Solution sol;
    cout << sol.missingNum(v) << endl;
}