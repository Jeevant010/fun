#include<bits/stdc++.h>
using namespace std;    

int main(){
    vector<int> a = { 11,1,2,1,1,5,3,6,6,3,512,3 };  
    int n = a.size();
    cout<<*max_element(a.begin()+1, a.begin()+5)<<endl; // 2

}