#include<bits/stdc++.h>
using namespace std;
#define ll long long

int mindist( ll x , ll y , ll z ){
    vector<ll>v = { x, y , z};
    sort(v.begin(),v.end());
    int n = v.size()-1;
    ll d = abs(v[n]-v[0]);
    return d ;
}

int main (){
    ll x,y,z ;
    cin>>x>>y>>z;
    cout<<mindist(x,y,z);

    return 0;
}