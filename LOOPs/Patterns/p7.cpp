#include <iostream>
using namespace std;

int main() {
    int n= 4;
    for(int i =1;i <= n;i++){
        // space
        for(int j =1;j<=n-i;j++){
            cout<<" ";
        }
        // stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}