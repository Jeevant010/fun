#include<bits/stdc++.h>
using namespace std;

class Solution {

    private: 
    int f(int x) {
        string s = to_string(x);
        int n = s.size();
        if (n & 1) {
            return 0;
        }
        int a = 0, b = 0;
        for (int i = 0; i < n / 2; ++i) {
            a += s[i] - '0';
            b += s[n / 2 + i] - '0';
        }
        return a == b ? 1 : 0;
    };

public:
// int countSymmetricIntegers(int low, int high) {
//         int count = 0, val;
//         val = (high > 100) ? 100 : high;
//        if(low<100 ){
//             for(int i=low; i<=val; i++){ 
//                 string s = to_string(i);
//                 if(s[0] == s[1]) count++;
//             }
//         }
        
//         if(high >= 99){
//             // if(low < 10) count = 9;
//             for(int i=low; i<= high; i++ ){
//                 string s = to_string(i);
//                 int s1 = int(s[0]) + int(s[1]);
//                 int s2 = int(s[2]) + int(s[3]);
//                 if( s1 == s2 ) count++;
//             }
//         }
//             return count;
//     }

int countSymmetricIntegers(int low, int high) {
    int ans = 0;
    
    for (int x = low; x <= high; ++x) {
        ans += f(x);
    }
    return ans;
}

};

int main(){
    Solution sol;
    int low, high;
    cin>>low>>high;
    int result = sol.countSymmetricIntegers(low, high);
    cout << "Number of powerful integers: " << result << endl;
    cout << endl;
    return 0;
}