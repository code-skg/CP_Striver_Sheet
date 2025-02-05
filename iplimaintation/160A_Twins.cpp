// https://codeforces.com/problemset/problem/160/A
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int rs = 0, ls = 0;
    int count = 0 ;
    for(int i = 0 ; i < n; i++) {
        if(rs <= ls){
            rs+=vec[i];
            count++;
        }else{
            ls+=vec[n-1 -i];
        }
    }
    cout<<count<<"\n";
    


    return 0;
}
