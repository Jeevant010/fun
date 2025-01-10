#include<bits/stdc++.h>
using namespace std;

void binary(vector <int> &a, int key){
    sort(a.begin(),a.end());
    int high = a.size()-1 , low =0 , mid;

    while(low <= high){
        mid = low + (high - low) / 2;

        if(key > a[mid]){
            low = mid + 1;
        }
        else if(key < a[mid]){
            high = mid - 1;
        }
        else if(key == a[mid]){
            cout<<"Value is found.";
            return;
        }
    }
        cout<<"Value is not found.";
        return ;
}

int main(void){
    int n,key;
    cin>>n;
    vector <int> t(n);
    for (auto i = 0; i < n; i++)
    {
        cin>>t[i];
    }
    cout<<"Enter the value for search :\n";
    cin>>key;
    binary(t,key);
}