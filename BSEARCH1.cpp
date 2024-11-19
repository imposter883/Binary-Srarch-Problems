#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (q--) {
        long long x;
        cin >> x;

        long long low = 0, high = n - 1;
        bool found = false;

        while (low <= high) {
            long long mid = (low + high) / 2;

            if (arr[mid] == x) {
                cout << mid << endl;
                found = true;
                break;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (!found) {
            cout << "-1" << endl;
        }
    }

    return 0;
}
