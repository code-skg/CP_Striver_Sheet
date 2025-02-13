//  https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;

string modify(string str) {
    int c = 0, l = 0;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        if (isupper(str[i])) {
            c++;
        } else {
            l++;
        }
    }
    if (c > l) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    return str;
}

int main() {
    string str;
    getline(cin, str);
    cout << modify(str);
    return 0;
}
