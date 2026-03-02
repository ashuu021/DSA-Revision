#include <iostream>
using namespace std;

long long factorial(int n){
    if(n < 0) return -1;

    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main() {
    cout << factorial(0) << endl;
    cout << factorial(0) << endl;
    cout << factorial(0) << endl;
    cout << factorial(1) << endl;
    cout << factorial(10) << endl;
    cout << factorial(20) << endl;
}