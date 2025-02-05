#include<bits/stdc++.h>
using namespace std;
int find(int n , string s ){
    for(int i = 0 ; i < n ; i++){
        if(s[i]=='1'){
            return 1 ; 
        }
    }
    return 0 ;
    
}
int main (){
    int n = 0;
    cin >> n;
    cin.ignore(); // Ignore the newline character after the integer input

    string s = "";
    getline(cin, s);
    int ans = find(n , s);
    if(ans == 1 ){
        cout<<"HARD";

    }else{
        cout<<"EASY";
    }

    
  
    return 0 ;
}
