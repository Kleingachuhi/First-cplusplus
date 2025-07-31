#include <iostream>
using namespace std;

int main () {
    int f1;
    int f2;
    int r =0;
    string in;

    cout << "Enter two integers : ";
    cin >> f1 >> f2;

    cout << "div for division or mod for modulus : ";
    cin >> in;

    if (in == "div") {
        r = f1 / f2;
        cout << "The result is " << r  << "\n";
    } else if (in == "mod") {
        r = f1 % f2;
        cout << "The result is " << r << "\n";
    } else {
        cout << "You have not entered div or mod !";
    }
}