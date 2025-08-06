#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int j=0;
        // for(int i=0; i<n; i++){
        //         nums1.pop_back();
        // }
        // for(int i=0; i<n; i++){
        //     if( nums1[i] > nums2[j] ){
        //         nums1.insert(nums1.begin() + i, nums2[j]);
        //         j++;
        //     }
        // }
        //     if(j>=n) return;
        //     else {
        //         while( j<n ) {
        //             nums1.push_back(nums2[j]);
        //             j++;
        //             }
        //     }
        int a = n-1 , b = m-1, c = m+n-1;
        while(a>=0){
            if(b>=0 && nums1[b] > nums2[a] ) nums1[c--] = nums1[b--];
            else nums1[c--] = nums2[a--];
    }
        }
};

int main() {
    Solution sol;
    int m, n;

    cout << "Enter size of nums1 (m elements + n extra 0s): ";
    cin >> m;
    cout << "Enter size of nums2: ";
    cin >> n;

    vector<int> nums1(m + n);
    vector<int> nums2(n);

    cout << "Enter " << m << " sorted elements for nums1: ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    cout << "Enter " << n << " sorted elements for nums2: ";
    for (int i = 0; i < n; i++) cin >> nums2[i];

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) cout << x << " ";
    cout << endl;

    return 0;
}
