#include <iostream>
using namespace std;
int func(int a ,int b){

    return a*a+b*b+2*(a*b);
}
int main() {
    cout<<func(3,5);
    return 0;
}