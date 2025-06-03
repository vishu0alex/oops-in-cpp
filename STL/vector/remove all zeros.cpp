#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1{1, 0, 0, 3, 4};

    auto newEnd = remove(v1.begin(), v1.end(), 0); // does NOT delete anything

    // Vector now looks like: [1, 3, 4, ?, ?]
    // Where ? are undefined/leftover values

    v1.erase(newEnd, v1.end());  // Actually deletes the tail

    for (int x : v1) {
        cout << x << " ";
    }

    return 0;
}
