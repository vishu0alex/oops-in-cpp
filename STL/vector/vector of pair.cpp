#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> p;
    vector<int> v{1, 6, 7, 5, 4, 3};

    p.push_back(make_pair(v[0], 0));
    cout << p[0].first << " " << p[0].second << endl;

    p.push_back(make_pair(v[1], 1));
    cout << p[1].first << " " << p[1].second << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> p;
    vector<int> v{1, 6, 7, 5, 4, 3};

    p.resize(2);  // Allocate space for at least 2 elements

    p[0] = make_pair(v[0], 0);
    p[1] = make_pair(v[1], 1);

    cout << p[0].first << " " << p[0].second << endl;
    cout << p[1].first << " " << p[1].second << endl;

    return 0;
}
