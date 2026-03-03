#include <iostream>
using namespace std;
int digiRoot(int n){
    if(n==0)return 0;
    return 1+(n-1)%9;
}
int main() {
   cout<< digiRoot(2344);
    return 0;
}