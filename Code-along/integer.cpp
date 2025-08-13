// #include <iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Enter a number :";
//     cin >>number;

//     if (number > 0) {
//         cout<< "You entered a positive number" << number << "\n";

//     } else if (number < 0)
//     {
//         cout<< "You entered a negative number " <<number << "\n";
//     }
//     else {
//         cout<< "You entered 0";
//     }
    
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int number;

//     cout << "Enter a number :";
//     cin >>number;

//     if (number > 10 && number < 20) {
//         cout << "The number entered is between ten and twenty";
//     } else {
//         cout << "The number entered is not between ten and twenty";
//     }
// }


// #include <iostream>
// using namespace std;

// int main () {
//     int M = 1;
    
//  while (M <=3 )
//  {
  
//     cout << M << "\n";
//     M+=1;
//  }


// }


// #include <iostream>

// using namespace std;

// int main () {
//     int num =1;

//     while (num <=12)
//     {
//        cout << "3 x "  << num  << " = " << 3 * num << "\n";
//        num +=1;
//     }

    
    
//  }



#include <iostream>
using namespace std;

int main () {
    int N = 0;
    int Sum = 0;
    do
    {
        N ++;
        Sum = Sum  + N;
} while (N<3);

cout << "Sum : " << Sum << "\n";

}