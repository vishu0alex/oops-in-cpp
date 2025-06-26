#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};  // You can change this
    int n = arr.size();

    int total = pow(2, n);  // Total 2^n subsequences

    cout << "All subsequences:\n";
    for (int mask = 0; mask < total; mask++) {
        cout << "{ ";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                cout << arr[i] << " ";
            }
        }
        cout << "}\n";
    }

    return 0;
}
