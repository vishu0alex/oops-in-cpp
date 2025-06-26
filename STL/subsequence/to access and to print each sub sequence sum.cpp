vector<int> arr = {1, 2, 3};
int n = arr.size();
int total = pow(2, n);
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
