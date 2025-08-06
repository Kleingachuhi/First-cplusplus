#include <iostream>
using namespace std;

int main () {
    int marks;

    cout << "----------------------------------------------" << "\n";
    cout << "Enter marks between 0 and 100" << "\n";

    cin >> marks;

    if (marks < 0 || marks >100) {
        cout << "Don't be too smart, put a mark between the required range" << "\n";
    }

    switch (marks/10)
    {
    case 10:
    cout << " Your grade is A" << "\n";
    break;
    case 9:
    cout << "Your grade is A" << "\n";
    break;
    case 8:
    cout << "Your grade is B" << "\n";
    break;
    case 7:
    cout << "Your grade is C" << "\n";
    break;
    case 6:
    cout << "Your grade is D" << "\n";
    break;
    case 5 :
    cout<< "Your grade is E " << "\n";
    break;
    case 4:
    cout << "Your grade is E-" << "\n";
    break;


    
    default:
    cout << "You have failed your grade is F" << "\n";
        break;
    }
}