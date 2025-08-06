#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

    vector<int> vote(vector<int>& nums) {
        int c = -1, v = 0, sm = -1, v1 = 0;

        
        for (auto n : nums) {
            if (c == n) v++;
            else if (sm == n) v1++;
            else if (v == 0) {
                c = n;
                v = 1;
            } else if (v1 == 0) {
                sm = n;
                v1 = 1;
            } else {
                v--;
                v1--;
            }
        }

        
        v = 0, v1 = 0;
        for (auto n : nums) {
            if (n == c) v++;
            else if (n == sm) v1++;
        }

        int n = nums.size();
        if (v > n / 3 && v1 > n / 3) return {c, sm};
        else if (v > n / 3) return {c};
        else if (v1 > n / 3) return {sm};
        else return {};
    }

public:
    vector<int> majorityElement(vector<int>& nums) {
        return vote(nums);

        /* ------------------- Brute Force (O(n^2)) -------------------
        int n = nums.size();
        vector<int> result;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) count++;
            }
            if (count > n / 3 && find(result.begin(), result.end(), nums[i]) == result.end()) {
                result.push_back(nums[i]);
            }
        }
        return result;
        ------------------------------------------------------------- */
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

    vector<int> result = sol.majorityElement(nums);
    cout << "Majority elements (> n/3 times): ";
    if (result.empty()) cout << "None";
    else {
        for (auto val : result) cout << val << " ";
    }
    cout << endl;

    return 0;
}
