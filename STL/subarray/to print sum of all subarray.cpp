#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3}; // Change as needed
    int n = arr.size();
    long long total = 0;

    for (int i = 0; i < n; i++) {
        total += (long long)arr[i] * (i + 1) * (n - i);
    }

    cout << "Total sum of all subarrays = " << total << endl;
    return 0;
}
