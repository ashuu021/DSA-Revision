#include <iostream>
using namespace std;
bool isPalindrome(int n ){
if(n<0||(n%10==0 && n!=0)){
    return false;}
int rev=0;
while (n>rev)
{
  rev=rev*10+n%10;
  n/=10;
}

    return n==rev || rev==rev/10;
}
int main() {
    cout << isPalindrome(121) << endl;  // 1 (true)
    cout << isPalindrome(123) << endl;  // 0 (false)
    cout << isPalindrome(-121) << endl; // 0 (false)
}