#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};  // You can change this
    int n = arr.size();

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    long long total_subseq_sum = sum * (1LL << (n - 1));  // 2^(n-1)

    cout << "Sum of all subsequence sums = " << total_subseq_sum << endl;

    return 0;
}
