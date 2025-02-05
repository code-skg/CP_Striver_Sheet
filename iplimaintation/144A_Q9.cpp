// https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main (){
    ll n= 0 ;
    cin>>n;
    vi army(n);
    for(int i = 0 ; i < n ; i++){
        cin>>army[i];
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(army[i]>army[0]){
            swap(army[i],army[0]);
            count++;
        }
        if(army[i]<army[n-1]){
            swap(army[i],army[n-1]);
            count++;
        }
    }
    cout<<count;
    return 0 ;
    
}