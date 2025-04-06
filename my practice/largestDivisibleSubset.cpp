#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> f(n);
        int k=0;
        for(int i=0;i<n; ++i){
            f[i] = 1;
            for(int j=0; j< i; ++j){
                if(nums[i] % nums[j] == 0)  f[i] = max(f[i] , f[j] + 1);
            }
            if(f[k] < f[i]) k = i;
        }
        int m = f[k];
        vector<int> res;
        for(int i=k; m>0; --i){
            if(nums[k] % nums[i] == 0 && f[i] == m){
                res.push_back(nums[i]);
                k = i;
                --m;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n; i++){
        cin>>nums[i];
    }
    vector<int> result = sol.largestDivisibleSubset(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}