#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number :";
    cin >>num;

    if (num <6) {
        cout<< num *10 << "\n";
    } else {
        cout<< num * 5 << "\n";
    }
}