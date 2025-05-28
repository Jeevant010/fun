#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m;
    cin>>n>>m;
    int cnts[m][5];
    vector<int> a;
    memset(cnts,0,sizeof(cnts));
    string s;
    while(n--)
    {
        cin>>s;
        for(int i=0;i<m;i++)
        {
            if(s[i]=='A') cnts[i][0]++;
            if(s[i]=='B') cnts[i][1]++;
            if(s[i]=='C') cnts[i][2]++;
            if(s[i]=='D') cnts[i][3]++;
            if(s[i]=='E') cnts[i][4]++;

        }
    }
    for(int i=0,temp;i<m;i++){
        cin>>temp;
        a.emplace_back(temp);
    }
    int total=0;
    for(int i=0;i<m;i++){
        int mx=0;
        for(int j=0;j<5;j++){
            if(cnts[i][j]>mx) mx = cnts[i][j];
        }
        total+=(mx*a[i]);
    }
    cout<<total<<endl;
    return 0;
}