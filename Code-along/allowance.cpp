// #include <iostream>
// using namespace std;

// int main() {
//     int J = 1;
//     int N = 0; // N represents the sum.

//     cout << "Numbers between 1 and 10" << endl;

//     do {
//         cout << J << endl;
//         N = N + J;
//         J++;
//     } while (J <= 10);

//     cout << "The sum is : " << N << endl;

//     return 0;
// }




// hardship =3 , transport=5, house=4, tax=30 
#include <iostream>
using namespace std;
int Salary;
string Name;
double HardshipAllowance, TransportAllowance, HouseAllowance, Tax, GrossSalary, NetSalary;

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

double grossSalary(){
    GrossSalary = Salary + HardshipAllowance + HouseAllowance + TransportAllowance;
    return GrossSalary;
}
double netSalary() {
    NetSalary = GrossSalary - Tax;
    return NetSalary;
}
void output() {
    cout << "Employee name is " << Name << "\n";
    cout << "Your basic salary is " << Salary << "\n";
    cout << "Hardship allowance is for  " << Name <<" is " << HardshipAllowance << "\n";
    cout << "Transport allowance is " << Name <<" is " << TransportAllowance << "\n";
    cout << "House allowance is " << Name <<" is "<< HouseAllowance << "\n";
    cout << "Tax  for "  << Name <<" is "<< Tax << "\n";
    cout << "The gross Salary is " << GrossSalary << "\n";
    cout << "The net Salary is " << NetSalary << "\n";

}
int main() {
   
    input();
    hardshipAllowance();
    transportAllowance();
    houseAllowance();
    tax();
    grossSalary();
    netSalary();
    output();
}
