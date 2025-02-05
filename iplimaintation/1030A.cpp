// https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>
using namespace std;

int find(int n, vector<int>& v) {
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) {
            return 1;
        }
    }
    return0;
}

int main() {
    int n = 0;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = find(n, v);
    if (ans == 1) {
        cout << "HARD";
    } else {
        cout << "EASY";
    }

    return 0;
}