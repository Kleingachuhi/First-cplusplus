#include <iostream>
using namespace std;

int x;
int y;
int power;
int Result;

int calculatePower(int base, int exponent) {
int power;
if (exponent ==0) {
    return 1;
} else {
power = base *calculatePower(base, exponent-1);
}
return power;
}

int main () {
    cout << "Enter a number X:";
    cin >> x;
    cout  << "Enter a number Y:" ;
    cin>>y;
    Result= calculatePower(x, y);
    cout << x <<  " ^ " << y <<  "= " << Result  << "\n";


}