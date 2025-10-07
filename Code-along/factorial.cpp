#include <iostream>
using namespace std;

int Factorial (int n){
if (n == 0 || n ==1)
{
    return 1;
} else {
    return n * Factorial(n-1);
}

}
int main () {
    int n; 
cout << "Enter a number n:";
cin >> n;
int Result = Factorial(n);
cout<<  n <<" factorial is " <<Result << endl; 
}