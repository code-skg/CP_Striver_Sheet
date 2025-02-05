// https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void snake(ll r , ll c){
    for (int i = 0; i < r; ++i) {
        if (i % 2 == 0) {
            // Even rows: fill with '#'
            for (int j = 0; j < c; ++j) {
                cout << "#";
            }
        } else {
            // Odd rows: fill with '.' and '#' at the start or end
            if ((i / 2) % 2 == 0) {
                // '#' at the end
                for (int j = 0; j < c - 1; ++j) {
                    cout << ".";
                }
                cout << "#";
            } else {
                // '#' at the start
                cout << "#";
                for (int j = 1; j < c; ++j) {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}

int main (){
    ll r ,c ;
    cin>>r>>c;
    snake(r,c);
    return 0;
}