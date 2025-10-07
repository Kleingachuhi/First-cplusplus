// #include <iostream>
// using namespace std;

// int main() {
//     int num1;
//     int num2;
//     int choice;
//     float result ;
//     cout << "Enter Number 1 :" ;
//     cin >> num1;
//     cout << "Ennter Number 2 :";
//     cin >> num2;
//     cout << "=============================== \n";

//     cout << "Operation menu" << "\n";

//     cout << "=============================== \n";
//     cout << "1 -> Add" << "\n";
//     cout << "2 -> Subtract"  << "\n";
//     cout << "3 -> Multiply"  << "\n";
//     cout << "4 -> Divide"  << "\n";
//     cout << "5 -> Modulus"  << "\n";
//     cout << "6 -> Exit"  << "\n";
//     cout << "=============================== \n";
//     cout << "Enter Choice :";
//     cin >>choice;

//     switch (choice)
//     {
//     case 1:
//     result = num1 + num2;
//     cout << "The result is " << result  << "\n";
//         break;
//         case 2:
//         // if (num1 > num2 ) {
//         //   result = num1 - num2; 
//         // } else {
//         //     result = num2 - num1;
//         // }
//         result = num1 - num2;
//         cout << "The result is " << result  << "\n";
//     break;
//     case 3:
//     result = num1 * num2;
//     cout << "The result is " << result  << "\n";
//     break;
//     case 4:
//     // if (num1 > num2) {
//     //     result = num1 / num2;
//     // } else {
//     //     result = num2 / num1;
//     // }
//     result = num1 / num2;
//     cout << "The result is " << result  << "\n";

//     break;
//     case 5:
//     result = num1 % num2;
//     cout << "The result is " << result  << "\n";
//     break;
//     case 6 :
//     return 0;
//     break; 
    
// default:
//     cout << "Sorry, invalid choice" << "\n";
//         break;
//     }

// }


#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    char choice;
    float result ;
    cout << "Enter Number 1 :" ;
    cin >> num1;
    cout << "Ennter Number 2 :";
    cin >> num2;
    cout << "=============================== \n";

    cout << "Operation menu" << "\n";

    cout << "=============================== \n";
    cout << "+ -> Add" << "\n";
    cout << "- -> Subtract"  << "\n";
    cout << "* -> Multiply"  << "\n";
    cout << "/ -> Divide"  << "\n";
    cout << "% -> Modulus"  << "\n";
    cout << "E -> Exit"  << "\n";
    cout << "=============================== \n";
    cout << "Enter Choice :";
    cin >>choice;

    switch (choice)
    {
    case '+':
    result = num1 + num2;
    cout << "The result is " << result  << "\n";
        break;
        case '-':
        result = num1 - num2;
        cout << "The result is " << result  << "\n";
    break;
    case '*':
    result = num1 * num2;
    cout << "The result is " << result  << "\n";
    break;
    case '/':
    result = num1 / num2;
    cout << "The result is " << result  << "\n";

    break;
    case '%':
    result = num1 % num2;
    cout << "The result is " << result  << "\n";
    break;
    case 'E' :
    cout << "Successfully exited";
    return 0;
    break; 
    
default:
    cout << "Sorry, invalid choice" << "\n";
        break;
    }

