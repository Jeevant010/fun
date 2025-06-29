#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r(i,n) for(ll i=0; i<n; i++)
#define v vector
#define p pair
#define m unordered_map

int main() {
    unordered_set<string> alcohol = {
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM",
        "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"
    };
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, c=0;
    cin>>n;
    r(i,n){
        string s;
        cin >> s;

        if (isdigit(s[0])) {
            int age = stoi(s);
            if (age < 18)
                c++;
        } else {
            if (alcohol.count(s))
                c++;
        }
    }
    cout<<c;
}
