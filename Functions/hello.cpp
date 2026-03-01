#include <iostream>
using namespace std;
void sayHello(){
    cout<<"Hello user :)\n";
}
void assistant(){
    sayHello();
    cout<<"work done sir\n";
}
int main() {
assistant();
    return 0;
}