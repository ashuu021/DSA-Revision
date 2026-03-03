#include <iostream>
using namespace std;
int sum(int n){

    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n/=10;
    }
    return sum;
}
int main() {
    
    cout<<sum(431);
    return 0;
}