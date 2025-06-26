#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};  // You can change this to any array
    int n = arr.size();

    cout << "All subarrays are:\n";

    // Outer loop: start index
    for (int i = 0; i < n; i++) {
        // Inner loop: end index
        for (int j = i; j < n; j++) {
            // Print subarray from index i to j
            cout << "[ ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }

    return 0;
}
