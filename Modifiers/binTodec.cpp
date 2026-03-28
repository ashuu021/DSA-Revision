// #include <iostream>
// using namespace std;
// void binTodec(int bin){
//     int n= bin;
//     int dec=0;
//     int pow=1; //2^1
//     while(n>0){
//         int digit =n%10;
//         dec+=digit*pow;
//         n=n/10;
//         pow=pow*2;

//     };
//     cout<<dec<<endl;
// }
// int main() {
// binTodec(1010);
//     return 0;
// }
#include <iostream>
using namespace std;
void binTodec(int bin){
    int n= bin;
    int dec=0;
    int pow=1; //2^1
    while(n>0){
        int digit =n%10;
        dec+=digit*pow;
        n=n/10;
        pow=pow*2;

    };
    cout<<dec<<endl;
}
int main() {
binTodec(1010);
    return 0;
}
