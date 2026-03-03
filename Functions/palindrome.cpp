#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    if(n < 0) return false;

    int original = n;
    long long reversed = 0;

    while(n > 0) {
        // int digit = n % 10;
        reversed = reversed * 10 + n%10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    cout << isPalindrome(121) << endl;  // 1 (true)
    cout << isPalindrome(123) << endl;  // 0 (false)
    cout << isPalindrome(-121) << endl; // 0 (false)
}