#include <iostream>
using namespace std;
int startRange ;
int endRange;
int evenNumbers;
int oddNnumbers;
int  numberOfEvenNumbers;
int numberOfOddNumbers;
int sumOfEvenNumbers;
int sumOfOddNumbers ;
double evenAverage=0;
double oddAverage=0; 
int currentNumber;
void returnArithmetic(int currentNumber){
    if (currentNumber >endRange)
    {
       return;
    }; 
    if (currentNumber %2 ==0)
    {
        sumOfEvenNumbers += currentNumber;
        numberOfEvenNumbers++;
    }else {
        sumOfOddNumbers += currentNumber;
        numberOfOddNumbers++;
    };
    
    returnArithmetic(currentNumber+1);

}
int main (){
cout <<"Enter the first number:";
cin >> startRange;
cout << "Enter the last number:";
cin >> endRange;
returnArithmetic(currentNumber);
evenAverage = sumOfEvenNumbers / numberOfEvenNumbers;
oddAverage = sumOfOddNumbers / numberOfOddNumbers;
cout << "The sum of the even number is " << sumOfEvenNumbers <<endl;
cout << "The sum of odd numbers is " << sumOfOddNumbers << endl;
cout << "The average of even numbers is " << evenAverage<< endl;
cout << "The average of odd numbers is " << oddAverage << endl;

}