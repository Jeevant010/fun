#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
   

    ll ans=0;
    ll sz=s.size();
    ll current=0;
    for(int i=0; i<sz ; i++){
        if(!k)
            break;
        if(!i)
            current=s[i]-'a'+1,ans+=current,k--;
        else{
            ll temp=s[i]-'a'+1;
            if(temp>current+1){
                
                k--;
                current=temp;
                ans+=current;
            }
        }

    }
    if(k)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;

}
