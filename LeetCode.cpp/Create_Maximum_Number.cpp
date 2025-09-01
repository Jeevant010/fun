#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

    vector<int> fill(vector<int> n1, int k) {
        int d = n1.size() - k;
        vector<int> out;
        for (auto n : n1) {
            while (d && !out.empty() && out.back() < n) {
                out.pop_back();
                d--;
            }
            out.push_back(n);
        }
        out.resize(k);
        return out;
    }

    vector<int> arrange(vector<int> n1, vector<int> n2) {
        vector<int> o;
        while (!n1.empty() || !n2.empty()) {
            vector<int>& n = n1 > n2 ? n1 : n2;
            o.push_back(n[0]);
            n.erase(n.begin());
        }
        return o;
    }

public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> b;
        for (int i = max(k - n1, 0); i <= min(k, n2); i++) {
            b = max(b, arrange(fill(nums1, i), fill(nums2, k - i)));
        }
        return b;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {6 , 7};
    vector<int> nums2 = {6 , 0 ,4};
    int k = 5;

    vector<int> result = sol.maxNumber(nums1, nums2, k);

    cout << "Max Number: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
