 // hardship =3 , transport=5, house=4, tax=30 
#include <iostream>
using namespace std;
int Salary;
string Name;
double HardshipAllowance, TransportAllowance, HouseAllowance, Tax;

void input() {
    cout << "Enter your Name :";
    cin >> Name;
    cout << "Enter your Salary :";
    cin >> Salary;
}

double hardshipAllowance (){
    HardshipAllowance = Salary*0.03;
    return HardshipAllowance; 
}

double houseAllowance() {
    HouseAllowance = Salary * 0.04;
    return HouseAllowance;
}

double transportAllowance() {
    TransportAllowance = Salary * 0.05;
    return TransportAllowance;
}

double tax() {
    Tax = Salary * 0.3;
    return Tax;
}

void output() {
    cout << "Employee name is " << Name << "\n";
    cout << "Your basic salary is " << Salary << "\n";
    cout << "Hardship allowance is for  " << Name <<" is " << HardshipAllowance << "\n";
    cout << "Transport allowance is " << Name <<" is " << TransportAllowance << "\n";
    cout << "House allowance is " << Name <<" is "<< HouseAllowance << "\n";
    cout << "Tax is "  << Name <<" is "<< Tax << "\n";
}
int main() {
   
    input();
    hardshipAllowance();
    transportAllowance();
    houseAllowance();
    tax();
    output();
}