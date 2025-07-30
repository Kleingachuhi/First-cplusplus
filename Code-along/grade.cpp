#include <iostream>
using namespace std;

 int main () {
    int grade;
    cout << "Enter a grade :";
    cin >>grade;

    if (grade >= 0 && grade <=39) {
        cout<< "F";
    } else if (grade >= 40 && grade <= 49)
    {
        cout << "D";
    } else if (grade >= 50 && grade <= 59)
    {
        cout << "C";
    } else if (grade >=60 && grade<=69 )
    {
        cout << "B";
    }else if (grade >= 70 && grade <= 100)
    {
        cout<< "A";
    }
    
    
    
    
 }