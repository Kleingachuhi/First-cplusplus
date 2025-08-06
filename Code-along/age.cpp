// #include <iostream>

// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age :";
//     cin >> age;

//     if (age>=18 && age <=90) {
//         cout<< "Congratulations you are eligible to vote!" << "\n";
//     } else if (age > 90)
//     {
//         cout<<"You are dead!!" << "\n";
//     }else
//      {
//         cout <<"Sorry, you are under 18 not allowed to vote!" "\n";
//     }
// }


// # include <iostream>
// using namespace std;

// int main() {
//     int age1;
//     int age2;
//     int age3;

//     cout << "Enter age1 :";
//     cin >> age1;
//     cout << "Enter age2 : ";
//     cin >>age2;
//     cout << "Enter age3 :";
//     cin >> age3;

//     if (age1 > age2 && age1 > age3) {
//         cout << "Age1 is the oldest" << "\n";

//     } else if (age2 > age1 && age2 > age3) {
//         cout << "Age2 is the oldest" << "\n";
//     } else if (age3 > age1 && age3 > age2) {
//         cout << "Age3 is the oldest" << "\n";
//     }

//     if (age1 < age2 && age1 < age3) {
//         cout << "Age1 is the youngest" << "\n";

//     } else if (age2 < age1 && age2 < age3) {
//         cout << "Age2 is the youngest" << "\n";
//     } else if (age3 < age1 && age3 < age2) {
//         cout << "Age3 is the youngest" << "\n";
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter your age : ";
    cin >> age;

    if (age < 18) {
        cout << "You are a minor" << "\n";

    } else if (age >=18 && age <25) {
        cout << "You are a university student please work hard" << "\n";
    } else if (age >= 25 && age <30) {
        cout << "You are a graduate start looking for a job aggressively" << "\n";
    } else if (age >= 30 && age < 35) {
        cout << "You have a stable job consider enrolling for masters" << "\n";
    } else if (age >= 35 && age <61) {
        cout << "You are a family person" << "\n";
    } else {
        cout << "Take it easy enjoy your retirement you are a senior citizen!" << "\n";
    }
}