#include <iostream>
using namespace std;
int Sum;
int sum(int a,int b) {
    return a+b;
}
int main() {
Sum = sum(4, 5);
cout << Sum;
}