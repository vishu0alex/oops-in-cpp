#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};  // Change as needed
    int n = arr.size();
    int total = pow(2, n);  // Total subsequences = 2^n

    cout << "Subsequences and their sums:\n";

    for (int mask = 0; mask < total; mask++) {
        int sum = 0;
        cout << "{ ";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cout << arr[i] << " ";
                sum += arr[i];
            }
        }
        cout << "} → Sum = " << sum << "\n";
    }

    return 0;
}
