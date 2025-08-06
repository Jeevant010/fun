#include <bits/stdc++.h>
using namespace std;

class Solution {
    //  TLE 
    // private:
    // int pas(int i , int j , vector<vector<int>>& dp ){
    //     if( i == 0 || i == j ) return 1;
    //     if( dp[i][j] != -1 ) return dp[i][j];
    //     return dp[i][j] = pas(i-1 , j-1 , dp ) + pas(i-1 , j, dp);
    // }
public:
    vector<int> getRow(int rowIndex) {
        // vector <vector<int>> dp(rowIndex+1, vector<int> (rowIndex+1 , -1));
       
        // for(int i=0; i<=rowIndex ; i++){
        //         r.push_back(pas(rowIndex, i , dp));
        // } for (int i = 1; i < rowIndex; i++) {
        

        vector<int> r;
        long long val = 1;
        for (int i = 0; i <= rowIndex; i++) {
            r.push_back(val);
            val = val * (rowIndex - i) / (i + 1); 
        }
        return r;


        // vector<int> r(rowIndex + 1, 1);
        // for(int i=0; i<rowIndex; i++){
        //     for(int j=i; j>0;j--){
        //         r[j]  += r[j-1];
        //     }
        // }
        // return r;
    }
};
int main() {
    Solution sol;
    int rowIndex;
    cout << "Enter the row index: ";
    cin >> rowIndex;

    vector<int> result = sol.getRow(rowIndex);

    cout << "Row " << rowIndex << " of Pascal's Triangle:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
