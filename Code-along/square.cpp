// #include <iostream>
// using namespace std;

// int calculate_square(int number, int counter ){
//     if (counter ==0)
//     {
//         return 0;
//     }
//     return number + calculate_square(number, counter-1);
// }

// int main () {

//     int num, result;
//     cout << "Enter a number to be squared:";
//     cin >> num;
//     result = calculate_square(num, num);
//     cout << result << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int calculate_square(int number, int counter) {
    if (counter == 0)
    {
        return 0;
    } 
    return number + calculate_square(number,counter-1);
}

int main () {
    int num;
    cout << "Enter a number to be squared:";
    cin >> num;
int result;
result = calculate_square(num, num);
cout << result << "\n";
}