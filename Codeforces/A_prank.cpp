#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long


int main()
{
    ll n,ans=0,cnt=0;
        cin>>n;
        ll a[n+2];
        a[0]=0, a[n+1]=1001;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
         
        for(int i=1;i<=n;i++)
        {
            if(a[i]==a[i-1]+1 && a[i]==a[i+1]-1 ){cnt++;ans=max(ans,cnt);}
            else cnt=0;
        }
        cout<<ans<<endl;

    return 0;
}