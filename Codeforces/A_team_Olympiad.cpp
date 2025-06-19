#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    vector<int> ones, twos, threes;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1) ones.push_back(i + 1);
        else if(x == 2) twos.push_back(i + 1);
        else threes.push_back(i + 1);
    }

    int mi = min({(int)ones.size(), (int)twos.size(), (int)threes.size()});
    cout << mi << '\n';

    for(int i = 0; i < mi; i++){
        cout << ones[i] << " " << twos[i] << " " << threes[i] << '\n';
    }

    return 0;
}
