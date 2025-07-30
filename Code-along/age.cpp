#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter your age :";
    cin >> age;

    if (age>=18 && age <=90) {
        cout<< "Congratulations you are eligible to vote!" << "\n";
    } else if (age > 90)
    {
        cout<<"You are dead!!" << "\n";
    }else
     {
        cout <<"Sorry, you are under 18 not allowed to vote!" "\n";
    }
}