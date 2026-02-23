#include <iostream>
using namespace std;

int main() {
    int n =4;
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
    for (int i = 1; i < n; i++)
    {
        for (int j =1; j<=4;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}