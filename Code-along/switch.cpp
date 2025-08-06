#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int choice;
    float result ;
    cout << "Enter Number 1 :" ;
    cin >> num1;
    cout << "Ennter Number 2 :";
    cin >> num2;
    cout << "1 -> Add" << "\n";
    cout << "2 -> Subtract"  << "\n";
    cout << "3 -> Multiply"  << "\n";
    cout << "4 -> Divide"  << "\n";
    cout << "5 -> Modulus"  << "\n";
    cout << "6 -> Exit"  << "\n";
    cout << "Enter Choice :";
    cin >>choice;

    switch (choice)
    {
    case 1:
    result = num1 + num2;
        break;
        case 2:
        // if (num1 > num2 ) {
        //   result = num1 - num2; 
        // } else {
        //     result = num2 - num1;
        // }
        result = num2 - num1;
    break;
    case 3:
    result = num1 * num2;
    break;
    case 4:
    // if (num1 > num2) {
    //     result = num1 / num2;
    // } else {
    //     result = num2 / num1;
    // }
    result = num1 / num2;

    break;
    case 5:
    result = num1 % num2;
    break;
    case 6 :
    return 0;
    break; 
    
    default:
    cout << "Sorry, invalid choice";
        break;
    }
cout << "The result is " << result  << "\n";
}