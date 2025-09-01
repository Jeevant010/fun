#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
            int n1 = nums1.size(), n2 = nums2.size();
            vector<int> best;
            for (int k1=max(k-n2, 0); k1<=min(k, n1); ++k1)
                best = max(best, maxNumber(maxNumber(nums1, k1),maxNumber(nums2, k-k1)));
            return best;
        }  

        vector<int> maxNumber(vector<int> nums, int k) {
            int drop = nums.size() - k;
            vector<int> out;
            for (int num : nums) {
                while (drop && out.size() && out.back() < num) {
                    out.pop_back();
                    drop--;
                }
                out.push_back(num);
            }
            out.resize(k);
            return out;
        }

        vector<int> maxNumber(vector<int> nums1, vector<int> nums2) {
            vector<int> out;
            while (nums1.size() + nums2.size()) {
                vector<int>& now = nums1 > nums2 ? nums1 : nums2;
                out.push_back(now[0]);
                now.erase(now.begin());
            }
            return out;
        }
    };

int main() {
    Solution sol;
    int n, m , k;
    cin>>n>>m;
    vector<int> nums1(n) , nums2(m);
    for(int i=0;i<n; i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n; i++){
        cin>>nums2[i];
    }
    cin>>k;
    vector<int> result = sol.maxNumber(nums1, nums2, k);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout << endl;
}