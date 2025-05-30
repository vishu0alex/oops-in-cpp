#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(5);
    vector<int> v3(5, 10);
    vector<int> v4 = {1, 2, 3, 4};
    vector<int> v5(v4);
    vector<int> v6 = std::move(v4);
    int arr[] = {10, 20, 30};
    vector<int> v7(arr, arr + 3);
    list<int> lst = {7, 8, 9};
    vector<int> v8(lst.begin(), lst.end());
    vector<int> v9;
    v9.assign(3, 42);
    vector<int> v10;
    v10.push_back(1);
    v10.emplace_back(2);
    vector<vector<int>> matrix(2, vector<int>(3, -1));
}
