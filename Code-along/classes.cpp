#include <iostream>
using namespace std;
 class Student
 {

 public:
 int admNo;
 string Name;
 int exam1;
 int exam2;
 double total;
 double average;
 char grade;
 };
int main (){
    Student s[80];
    int n;
    cout << "Enter the number of students in your class :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the admission of student :";
        cin >> s[i].admNo;
        cout << "Enter your Name :";
        cin>> s[i].Name;
        cout << "Enter Exam1 marks :";
        cin >> s[i].exam1;
        cout << "Enter Exam2 marks :";
        cin >> s[i].exam2;
        s[i].total = s[i].exam1 + s[i].exam2;
        s[i].average = (s[i].total) / 2;
        if (s[i].average >=0 && s[i].average<40)
        {
           s[i].grade ='F';
        } else if (s[i].average >39 && s[i].average <50)
        {
           s[i].grade ='D';
        } else if (s[i].average >50 && s[i].average<60)
        {
           s[i].grade = 'C';
        } else if (s[i].average >59 && s[i].average <70)
        {
           s[i].grade = 'B';
        } else if (s[i].average >69 && s[i].average <101)
        {
            s[i].grade = 'A';
        }
        
        for (int i = 0; i < n; i++)
        {
           cout << "The total for " << s[i].Name << " is " << s[i].total << "\n";
           cout << "The average for " << s[i].Name << " is " << s[i].average << "\n";
           cout << "The grade for " << s[i].Name << " is " << s[i].grade << "\n";
        }
        
        
        
        
    }
    
}