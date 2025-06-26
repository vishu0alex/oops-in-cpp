#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3}; // You can change the array
    int n = arr.size();

    int totalSum = 0;

    // Traverse all subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];       // sum of subarray from i to j
            totalSum += sum;     // add to total
        }
    }

    cout << "Total sum of all subarrays = " << totalSum << "\n";

    return 0;
}
