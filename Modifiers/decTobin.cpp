#include <iostream>
using namespace std;
void decTobin(int dec){
int n=dec;
int pow=1;
int bin=0;
while (n>0)
{
int digit =n%2;
bin+=digit*pow;
pow=pow*10;
n=n/2;
}
cout<<bin<<endl;
 }
 
int main() {
decTobin(5);
    return 0;
}