#include <iostream>
using namespace std;
int startRange; // This is the number where theh range will start 
int endRange; // This is the number where the range will end
int evenSum;
int oddSum;
float evenAverage;
float oddAverage;
int numberOfEvenNumbers, numberOfOddNumbers; // while recursion occurs we keep track of how many even or odd numbers are there and incerement them with ++ in the arithmeticRecursion function

void arithmeticRecursion ( int currentNumber) { //Declare a current number which we will append to the sum of even number or the sum of odd numbers depending on whether the modulus of two is 1 or 0

    if (currentNumber> endRange) {
        return ;
    } // This is the base case the if statement that checks if a the current number while the recursion is ongoing if it becomes greater than the endRange it causes a break s=or in other words out of range

    if (currentNumber %2 ==0) 
    {
        evenSum+= currentNumber;
        numberOfEvenNumbers ++; // numbers of even numbers as recursuion occurs is tracked
    } else {
        oddSum += currentNumber;
        numberOfOddNumbers ++; // number of even numbers as the recursion occurs is tracked
    }
    arithmeticRecursion(currentNumber + 1); // This is the recursive step
}
int main () {

    cout << "Enter start Range:" ;
    cin >> startRange;
    cout << "Enter end of Range:" ;
    cin >> endRange;
    arithmeticRecursion(startRange);

    oddAverage = (oddSum) / (numberOfOddNumbers);
    evenAverage = (evenSum) / (numberOfEvenNumbers);

    cout << "The sum of the even numbers is " << evenSum << "\n";
    cout << "The sum of the odd numbers is " << oddSum << "\n";
    cout << "The average of the even numbers is " << evenAverage << "\n";
    cout << "The average of the odd numbers is " << oddAverage <<"\n";

}