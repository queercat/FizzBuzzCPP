#include <iostream>
using namespace std;int main(){int x=1;char*f="Fizz\n";char* b="Buzz\n";char*c="FizzBuzz\n";while(x){!(x%3)&&!(x%5)&&x?cout<<c:!(x%3)&&x?cout<<f:!(x%5)?cout<<b:cout<<x<<endl;x<100?++x:x=0;}}
