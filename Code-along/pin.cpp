#include <iostream>
using namespace std;

int main () {
    int i =3;
    int pin;
    int correctPin = 0000;
    for (int i = 3 - 1; i >= 0 && pin != correctPin ; i--)
    {
        cout << "Enter your pin :";
            cin >> pin;
            cout << "The value of pin is " << pin  << "\n";
     

    }
  
}

