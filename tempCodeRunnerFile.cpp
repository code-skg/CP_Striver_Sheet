#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        // Sort v in descending order
        sort(v.rbegin(), v.rend());

        // Process each query immediately.
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            int count = 0;
            // Process v in descending order.
            for (int k = 0; k < n && x > 0; ++k) {
                if (x >= v[k]) {
                    x ^= v[k];
                    count++;
                }
            }
            cout << count << " ";
        }
        cout << "\n";
    }
    return 0;
}