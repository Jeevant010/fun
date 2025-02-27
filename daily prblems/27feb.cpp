#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    
  stack<int> s, minStack;
  public:
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here 
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) minStack.push(x);
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if (s.empty()) return;
        if (s.top() == minStack.top()) minStack.pop();
        s.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        return s.empty() ? -1 : s.top();
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        return minStack.empty() ? -1 : minStack.top();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}