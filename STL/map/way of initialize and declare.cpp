#include <iostream>
#include <map>
#include <vector>
#include <list>
using namespace std;

int main() {
    map<int, string> m1;                                        // Empty map
    map<int, string> m2 = {{1, "one"}, {2, "two"}};             // Initializer list
    map<int, string> m3(m2);                                    // Copy constructor
    map<int, string> m4 = std::move(m2);                        // Move constructor

    pair<int, string> arr[] = {{3, "three"}, {4, "four"}};      // From array of pairs
    map<int, string> m5(arr, arr + 2);                          // Range constructor

    vector<pair<int, string>> vec = {{5, "five"}, {6, "six"}};  // From vector of pairs
    map<int, string> m6(vec.begin(), vec.end());                // Range constructor

    list<pair<int, string>> lst = {{7, "seven"}, {8, "eight"}}; // From list of pairs
    map<int, string> m7(lst.begin(), lst.end());                // Range constructor

    map<int, string> m8;                                        // Insert
    m8.insert({9, "nine"});
    m8.insert(pair<int, string>(10, "ten"));
    m8.insert(make_pair(11, "eleven"));

    map<int, string> m9;                                        // Emplace
    m9.emplace(12, "twelve");
    m9.emplace(13, "thirteen");

    map<int, string, greater<int>> m10 = {                      // Custom comparator
        {14, "fourteen"}, {15, "fifteen"}
    };

    map<int, vector<int>> m11 = {                               // Complex value type
        {1, {10, 20}},
        {2, {30, 40}}
    };

    map<int, pair<string, int>> m12 = {                         // Value as pair
        {1, {"apple", 100}},
        {2, {"banana", 120}}
    };

    map<pair<int, int>, string> m13 = {                         // Key as pair
        {{1, 2}, "one-two"},
        {{3, 4}, "three-four"}
    };

    return 0;
}
