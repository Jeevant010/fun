#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b) {
    int temp = a; // Store the value of a in temp
    a = b; // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1; // Pointer for the smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // If current element is smaller than or equal to pivot
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap current element with the smaller element
        }
    }
    swap(arr[i + 1], arr[high]); // Place the pivot in the correct position
    return i + 1; // Return the index of the pivot
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {    // If there are more than one elements
        int pi = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pi - 1); // Recursively sort elements before partition
        quickSort(arr, pi + 1, high); // Recursively sort elements after partition
    }
}

int main() {
    vector<int> arr = {151, 10, 7, 8, 9, 1, 5}; // Example array
    int n = arr.size();
    quickSort(arr, 0, n - 1); // Call quickSort on the entire array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print sorted array
    }
    cout << endl;
    return 0; // Exit the program
}