#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        deque<int> minQ, maxQ;
        int n = arr.size(), start = 0, resStart = 0, resEnd = 0;
        for (int end = 0; end < n; end++) {
            while (!minQ.empty() && arr[minQ.back()] > arr[end]) minQ.pop_back();
            while (!maxQ.empty() && arr[maxQ.back()] < arr[end]) maxQ.pop_back();
            minQ.push_back(end), maxQ.push_back(end);
            while (arr[maxQ.front()] - arr[minQ.front()] > x) {
                if (minQ.front() == start) minQ.pop_front();
                if (maxQ.front() == start) maxQ.pop_front();
                start++;
            }
            if (end - start > resEnd - resStart) resStart = start, resEnd = end;
        }
        return vector<int>(arr.begin() + resStart, arr.begin() + resEnd + 1);
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}