#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     private:


//     long long dfs(int i, bool t, string high, string full, int limit, int sufflen, int f[] ){
//         if(i == high.length() ) return 1;
//         if(!t && f[i] != -1) return f[i];
//         int l =0;
//         int h = t ? high[i] - '0' : 9;
//         long long res = 0;
//         if(i < high.length() - sufflen){
//             for(int m = l; m<= min(h,limit); m++){
//                 res += dfs(i+1, t && ( m == h) , high, full , limit, sufflen, f);
//             }
//         }
//         else {
//             int posInS = i - (high.length() - sufflen);
//             int d = full[i] - '0';

//             if (d <= limit && d >= l && d <= h) {
//                 res += dfs(i + 1, t && (d == h), high, full, limit, sufflen, f);
//             }
//         }
//         if(!t ) f[i] = res;
//         return res;

//     }

//     long long count(long long i, int limit, string s){
//         string t = to_string(i);
//         int n = t.length();

//         if(s.length() > n) return 0;

//         string k = string( n - s.length() , '0') + s;
//         int f[20];
//         memset(f,-1,sizeof(f));

//         return dfs(0,true, t, k, limit, s.length() , f);
//     }

//     // bool valid( long long num, int limit ){
//     //     while(num>0){
//     //         int digit = num%10;
//     //         if((digit > limit)) return false;
//     //         num/= 10;
//     //     }
//     //     return true;
//     // }

// public:
//     long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
//     //     long long k = atoll(s.c_str());
//     //     int count = 0;
//     //     for(long long i = k; i<= finish; i+= (long long)(pow(10, s.length())) ){
//     //         if(valid(i, limit) && i>= start) count++;
//     //     }
//     //     return count;

//     return count(finish, limit, s) - count(start-1, limit, s);


//     }
// };


class Solution {
    private:
        long long dp[17][2];
    
        long long dfs(int i, bool tight, const string& high, const string& full, int limit, int sufflen) {
            if (i == high.length()) return 1;
    
            if (!tight && dp[i][0] != -1) return dp[i][0];
    
            int lo = 0;
            int hi = tight ? high[i] - '0' : 9;
            long long res = 0;
    
            if (i < high.length() - sufflen) {
                // Prefix zone: choose any digit ≤ limit
                for (int d = lo; d <= min(hi, limit); d++) {
                    res += dfs(i + 1, tight && (d == hi), high, full, limit, sufflen);
                }
            } else {
                // Suffix zone: must match corresponding digit in `s`
                int posInS = i - (high.length() - sufflen);
                int d = full[i] - '0';
    
                if (d >= lo && d <= hi && d <= limit) {
                    res += dfs(i + 1, tight && (d == hi), high, full, limit, sufflen);
                }
            }
    
            if (!tight) dp[i][0] = res;
            return res;
        }
    
        long long count(long long num, int limit, const string& s) {
            string high = to_string(num);
            int n = high.length();
    
            if (s.length() > n) return 0;
    
            string low = string(n - s.length(), '0') + s;
    
            memset(dp, -1, sizeof(dp));
    
            return dfs(0, true, high, low, limit, s.length());
        }
    
    public:
        long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
            return count(finish, limit, s) - count(start - 1, limit, s);
        }
    };

int main(){
    Solution sol;
    int limit;
    long long start, finish;
    string s;
    cin>>start>>finish>>limit;
    cin.ignore();
    getline(cin, s);
    long long result = sol.numberOfPowerfulInt(start, finish, limit, s);
    cout << "Number of powerful integers: " << result << endl;
    cout << endl;
    return 0;
}