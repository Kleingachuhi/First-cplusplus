// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int EvenNumbers =0;
// //     int OddNumbers=0;
// //     int sumOfEvenNumbers=0;
// //     int averageEven=0;
// //     int averageOdd=0;
// //     int sumOfOddNumbers=0;
// //     int startOfRange=0;
// //     int endOfRange=0;
// //     int evenCount=0;
// //     int oddCount=0;

// // cout << "Enter starting number:";
// // cin >> startOfRange;
// // cout << "Enter last number:";
// // cin >> endOfRange;

// // for (int i = startOfRange; i <= endOfRange; i++)
// // {
// //     if (i % 2 == 0)
// //     {
// //         EvenNumbers += i;
// //         evenCount++;
// //     } else {
// //         OddNumbers += i;
// //         oddCount++;
// //     }
    
// // }
// // sumOfOddNumbers += OddNumbers;
// // sumOfEvenNumbers +=EvenNumbers;

// // averageEven = sumOfEvenNumbers / evenCount;
// // averageOdd = sumOfOddNumbers / oddCount;
// // cout << "The sum of even numbers is " << sumOfEvenNumbers << "\n";
// // cout << "The sum of odd numbers is " << sumOfOddNumbers<< "\n";
// // cout << "The average of even numbers is " <<averageEven<< "\n";
// // cout << "The average of odd numbers is " <<averageOdd<< "\n";
    

// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int day;
//     cout << "Enter a day between 1 and 3 ";
//     cin >> day;

//     switch (day)
//     {
//     case 1:
//         cout << "The first day is Monday" << endl;
//     break;
//     case 2:
//     cout << "The second day is Tuesday" << endl;
//     break;
//     case 3:
//     cout <<"The third day is Wednesday" << endl;
//     break;
//     default:
//         break;
//     }
// }

#include <iostream>
using namespace std;
int returnPower(int base, int exponent) {
    if (exponent == 0)
    {
        return 1;
    }else {
        return base * returnPower(base, exponent -1);
    }
    
}
int main (){
    int x, y, result;
cout << "Enter the base number:" ;
cin >> x;
cout << "Enter the exponent number:";
cin >> y;
result = returnPower(x, y);
cout <<x <<" raised to the power of " << y << " is " << result << endl;
}