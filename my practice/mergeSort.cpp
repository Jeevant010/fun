#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of left subarray
    int n2 = right - mid; // Size of right subarray

    vector<int> L(n1), R(n2); // Temporary arrays for left and right subarrays

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left; // Initial indexes for L[], R[], and merged array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]; // If current element in L[] is smaller or equal
            i++;
        } else {
            arr[k] = R[j]; // If current element in R[] is smaller
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) { // If there are more than one elements
        int mid = left + (right - left) / 2; // Find the middle point

        mergeSort(arr, left, mid); // Sort first half
        mergeSort(arr, mid + 1, right); // Sort second half

        merge(arr, left, mid, right); // Merge the sorted halves
    }
}
int main() {
    vector<int> arr = {151, 10, 7, 8, 9, 1, 5}; // Example array
    int n = arr.size();
    mergeSort(arr, 0, n - 1); // Call mergeSort on the entire array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print sorted array
    }
    cout << endl;
    return 0; // Exit the program
}