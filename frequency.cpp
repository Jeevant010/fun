#include <bits/stdc++.h>
using namespace std;

bool search(int a, vector<pair<int,int>> &p){
    for(int i=0;i<p.size();i++){
        if(a == p[i].first){
            return true;
        }
    }
    return false;
}

int searchindex(int a, vector<pair<int,int>> &p){
    for(int i=0;i<p.size();i++){
        if(a == p[i].first){
            return i;
        }
    }
    return NULL;
}

vector < pair<int,int> > frequency(vector<int> &a){
    int n = a.size();
    vector<pair<int,int>> result;
    for(int i=0; i<n; i++){
        if(search(a[i],result)){
            int l = searchindex(a[i],result);
            result[l].second ++;
            continue;
        }
        result.push_back(make_pair(a[i],1));
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter the size of array : \n";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    vector <int> v2(n);
   vector<pair<int,int>> freq(n);
   freq = frequency(v);
   
   for(int i=0;i<freq.size(); i++){
       cout<<freq[i].first << " : " << freq[i].second<<endl;
       
   }
}
