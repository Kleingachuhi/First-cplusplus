#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number :";
    cin >>number;

    if (number > 0) {
        cout<< "You entered a positive number" << number << "\n";

    } else if (number < 0)
    {
        cout<< "You entered a negative number " <<number << "\n";
    }
    else {
        cout<< "You entered 0";
    }
    
}