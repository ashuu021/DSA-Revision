#include <iostream>
using namespace std;

int main() {
    int a=10;
    int *ptr =&a;
    cout<<ptr<<"=="<<&a<<endl;
    cout<<"value of a"<<*ptr;
    return 0;
}