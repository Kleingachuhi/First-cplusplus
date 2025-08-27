#include <iostream> 
using namespace std;
 
int main () {
    int dailyFee =55;
    char carStatus;
    string memberStatus;

    cout << "Enter your Car status" << "\n";
    cout << "Choose L for Luxury and N for not luxury" << "\n";
    cin >> carStatus;

    cout << "Enter member status" << "\n";
    cout << "Enter true for member or false for not member " << "\n";
    cin >> memberStatus; 

    if (carStatus = 'L')
    {
        if (memberStatus =="true")
        {
           dailyFee +=20;
        } else if (memberStatus == "false")
        {
           dailyFee  +=30;
        }
        
        
    }
    
cout << dailyFee << "\n";
    
}