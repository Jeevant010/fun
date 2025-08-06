#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        // vector<int> v( n + 2 , -1);
        // for(auto i : nums){
        //     if( i > 0 && i <= n+1) v[i] = 1;
        // }
        // for (int i = 1; i <= n + 1; i++) {
        //     if (v[i] == -1) {
        //         return i;
        //     }
        // }
        // return n + 1;



        // cyclic sort
        int i = 0 ;
        while( i<n ){
            if(nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]   ){
                swap( nums[i] , nums[nums[i] - 1] );
            }
            else i++;
        }
        for(int i =0; i<n; i++){
            if( nums[i] != i + 1 ) return i + 1;
        }
        return i + 1;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.firstMissingPositive(nums);
    cout << "First missing positive: " << result << endl;

    return 0;
}
