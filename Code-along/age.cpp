#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age :";
    cin >> age;

    if (age>=18) {
        cout<< "Congratulations you are eligible to vote!" << "\n";
    } else {
        cout <<"Sorry, you are under 18 not allowed to vote!" "\n";
    }
}