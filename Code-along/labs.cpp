#include <iostream>
using namespace std;
int age;
int main(){
    cout << "Enter youur age: ";
    cin >> age; 
    if (age<18)
    {
        cout<< "You are a minor " << "\n";
    }else if (age >17 && age <25)
    {
        cout<< "You are a university student please work hard"  << "\n";
    } else if (age >24 && age <30)
    {
      cout<< "You are a graduate start looking for a job aggresively" << "\n";
    } else if (age>29 && age <35)
    {
        cout << "You have a stable job consider enrolling for masters" << "\n";
    } else if (age >34 && age<61)
    {
        cout<< "You are a family person" << "\n";
    } else if (age >60)
    {
        cout<< "Take it easy enjoy your retirement you are a senior citizen!!" << "\n";
    }
    
    
    
    
    
    
    return 0;
}