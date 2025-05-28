#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector< vector<string > >  v;
    string ss;
    getline(cin, ss);
    stringstream ss2(ss);
    vector<string> firstLine;
    string word;
    while(ss2 >> word){
        firstLine.push_back(word);
    }
    v.push_back(firstLine);
    
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        stringstream ss3(line);
        vector<string> currentLine;
        while(ss3 >> word){
            currentLine.push_back(word);
        }
        v.push_back(currentLine);
    }

    for(int i = 1; i <= n; i++){
        if( v[i][0] == v[i-1][0] ){
            v[i][0] = v[i-1][1];
        }
        else if( v[i][0] == v[i-1][1] ){
            v[i][0] = v[i-1][0];
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<2;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}