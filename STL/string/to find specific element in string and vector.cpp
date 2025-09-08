class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int A = 1; A < n; ++A) {   // loop through possible A values
            int B = n - A;              // B is chosen so A + B = n

            // Convert A and B to strings, join them, and check if '0' is present
            if ((to_string(A) + to_string(B)).find('0') == string::npos) {
                return {A, B};          // If no '0', return the pair
            }
        }
        return {};  // fallback (should never reach here for valid input)
    }
};

/*to_string(A) + to_string(B) → makes a combined string of A and B.

.find('0') → looks for the digit '0' in that string.

If result is npos → it means no zero found → ✅ valid pair.

If result is any number (index) → it means '0' exists in the number → ❌ skip.*/



string s = "hello";

cout << s.find('e');  // Output: 1 (index of 'e')
cout << s.find('o');  // Output: 4 (index of 'o')
cout << s.find('z');  // Output: npos (not found)


// for vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    auto it = find(v.begin(), v.end(), 30);
    if (it != v.end())
        cout << "Found at index " << (it - v.begin()) << endl;  // index = 2
    else
        cout << "Not found" << endl;
}

