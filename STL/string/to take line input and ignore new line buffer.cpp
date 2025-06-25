#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    cin.ignore(); // Ignore the leftover '\n'

    string str;
    getline(cin, str);
    cout << str;

    return 0;
}
