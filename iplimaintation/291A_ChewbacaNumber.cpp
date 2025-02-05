#include <iostream>
using namespace std;

# define ll long long 

ll CN(ll n) {
    ll result = 0;
    ll place = 1;
    bool isFirstDigit = true;
    
    while (n > 0) {
        ll digit = n % 10;
        if (digit > 4) {
            if (isFirstDigit && digit == 9 && n == 9) {
                digit = 9;
                isFirstDigit = false;
            } else {
                digit = 9 - digit;
            }
        }
        result += place * digit;
        place *= 10;
        n /= 10;
    }
    
    return result;
}

int main() {
    ll n;
    cin >> n;
    cout << CN(n) << endl;
    return 0;
}
