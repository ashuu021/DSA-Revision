#include <iostream>
using namespace std;
int sum(int a ,int b){
    int sum =a+b;
    return sum;
}
int diff(int a ,int b){
    int sum =a-b;
    return sum;
}
int main() {
    int s =sum(4,6);
    cout<<"Sum is :"<<s<<endl;
    return 0;
}