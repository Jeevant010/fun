#include <bits/stdc++.h>
using namespace std;

string rever(string &v){
    vector <string> st;
    stringstream v1(v);
    string i;
    while (v1 >> i){
        st.push_back(i);
    }
    string va = "";
    for(int i=st.size()-1;i>=0;i--){
        va = va + st[i] + " ";
    }
    return va;
}

int main(){
    string s;
    cout<<"Enter the string : \n";
    getline(cin,s);
    
    cout<<rever(s);
}
