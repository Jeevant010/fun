

    #include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
        cin>>a1[i];
    int i=0,j=n-1,max,k=0;
    int play1=0,play2=0;
    while(i<=j)
    {
        if(a1[i]>=a1[j])
        {
           max=a1[i];
           i++;
        }
        else{
            max=a1[j];
            j--;
        }
        if(k%2==0)
          play1=play1+max;
        else
          play2=play2+max;
     k++;
    }
    cout<<play1<<" "<<play2<<endl;
}