#include <iostream>
using namespace std;

int main() {
    int n =4;
    for (int  i = 0; i <= n ; i++)
    {
        // spaces
    for (int j=1;j<=n-i;j++){
        cout<<" ";
    }
    // stasrs 
     for (int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    
    return 0;
}