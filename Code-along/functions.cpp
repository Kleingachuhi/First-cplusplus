// #include <iostream>
// using namespace std;
// int Sum;
// int sum(int a,int b) {
//     return a+b;
// }
// int main() {
// Sum = sum(4, 5);
// cout << Sum;
// }

#include <iostream>
using namespace std;
int x,y;
int result;

int addition(int a,int b) {
    return(a+b);
}

void input () {
    cout << "Enter Number 1 :";
    cin >>x;
    cout << "Enter Number 2 :";
    cin >>y;
}

void output () {
    cout << "X  +  Y  = " << result << "\n";
}
int main () {
    input();
result=addition(x,y);
output();
    }