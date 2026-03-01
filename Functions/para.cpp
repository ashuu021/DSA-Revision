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
int pro(int a ,int b){
    int sum =a*b;
    return sum;
}
int main() {
    int s =sum(4,6);
    int d =diff(4,6);
    int p =pro(4,6);
    
    cout<<"Sum is :"<<s<<endl;
    cout<<"Difference  is :"<<d<<endl;
    cout <<"Product is : "<<p<<endl;
    return 0;
}