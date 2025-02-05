#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
    string s ; 
    int a = 0 , b = 0 ;
    getline(cin,s);
    ll n = s.length();
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '0'){
            a++; b = 0 ; 
            if(a==7){
                cout<<"YES";
                return 0 ;
            }
        }else{
            b++; a = 0 ;
            if(b==7){
                cout<<"YES";
                return 0 ;
            }
        }
    }cout<<"NO";

return 0 ;
    
   

}