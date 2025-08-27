#include <iostream>
using namespace std;
int main () {
    string name;
    int n;
    int Test1, Test2, Test3, Test4, Test5;
    int Total;
    cout << "Enter  Student Name :";
    getline(cin, name);
    for (n= 1; n<=5 ; n+=1)
    {
       cout << "Enter Test " << n << " Score" << "\n";
       if (n==1)
       {
        cin >> Test1;
       } else if (n ==2)
       {
        cin >> Test2;
       } else if (n==3) {
        cin >> Test3;
       } else if (n ==4)
       {
       cin >> Test4;
       } else if (n ==5) {
        cin >> Test5;
       }
       
       Total = Test1  + Test2 + Test3 + Test4 + Test5 ;
       
    }
    cout << "Total Score is " << Total << "\n" ;
    
}

