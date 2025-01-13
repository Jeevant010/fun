#include <bits/stdc++.h>

using namespace std;


// Container With Most Water

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int l = 0, r = arr.size() - 1, res = 0;
        while (l < r) res = max(res, (r - l) * (arr[l] < arr[r] ? arr[l++] : arr[r--]));
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}