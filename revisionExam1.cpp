#include <iostream>
using namespace std;
long factorial (long n){
if (n > 1)
return (n * factorial (n-1));
else return 1;
}
int main () {
long number;
cout << "Please type a number:" ;
cin >> number;
cout<< number << "! = " <<factorial(number);
return 0;
}

