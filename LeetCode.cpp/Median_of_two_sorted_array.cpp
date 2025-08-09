#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int s1=0, m=nums2.size(), n = nums1.size() ;
        // int len = m+n;
        // vector <int> res(len);
        // int i=0, j=0, k=0;
        // while(i<n && j<m){
        //     if(nums1[i] > nums2[j]) res[k++] = nums2[j++];
        //     else res[k++] = nums1[i++];
        // }
        // while(i<n) res[k++] = nums1[i++];
        // while(j<m) res[k++] = nums2[j++];

        // if((len) % 2 == 1 ) return res[(len)/2.0];
        // else return (res[(len)/2] + res[((len)/2) - 1])/2.0 ;

        if (nums1.size() > nums2.size()) swap(nums1, nums2); 

        int n = nums1.size(), m = nums2.size();
        int low = 0, high = n;
        int totalLeft = (n + m + 1) / 2; 

        while (low <= high) {
            int cut1 = (low + high) / 2;           
            int cut2 = totalLeft - cut1;           

            int l1 = (cut1 == 0) ? INT_MIN : nums1[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : nums2[cut2 - 1];
            int r1 = (cut1 == n) ? INT_MAX : nums1[cut1];
            int r2 = (cut2 == m) ? INT_MAX : nums2[cut2];

            if (l1 <= r2 && l2 <= r1) {
                
                if ((n + m) % 2 == 0)
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                else
                    return max(l1, l2);
            }
            else if (l1 > r2) high = cut1 - 1;  
            else low = cut1 + 1;               
        }
        return 0.0;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    cout << sol.findMedianSortedArrays(nums1, nums2) << "\n";
    return 0;
}
