#include <iostream>
using namespace std;

int main(){
 int marks[6] = {67, 89, 90, 87, 67, 90};

//  cout << marks[3] << "\n";
// string names[] ={"Tom", "Tim", "Alice", "Bla", "Bla"};
// cout << names[4];

// int nums[5];
int i;
int myMarks[5];
for ( i = 1; i < 6; i++)
{
   cout << "Enter Exam Marks :";
   cin >> myMarks[i];
   
}
cout << myMarks[1] << "\n";
cout << myMarks[2] << "\n";
cout << myMarks[3] << "\n";
cout << myMarks[4] << "\n";
cout << myMarks[5] << "\n";
}