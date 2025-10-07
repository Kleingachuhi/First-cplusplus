#include <iostream>
using namespace std;
int returnPower(int base, int power) {
    if (power == 0)
    {
        return 1;
    } else {
        return base * returnPower(base, power-1);
    }
    
}
int main() {
int x,y,result;
cout << "Enter the base number x:";
cin >> x;
cout << "Enter the power number y:";
cin >> y;
result = returnPower(x, y);
cout << x << " raised to the power of " << y << " is " << result << "\n";
}