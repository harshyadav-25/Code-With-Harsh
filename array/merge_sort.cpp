#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> merged;
    merged.reserve(n1 + n2); // reserve space for efficiency

    int i = 0, j = 0;

    // Merge until one array is exhausted
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements
    while (i < n1) {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < n2) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
