#include <iostream>
using namespace std;

int main () {
    float weight;
    float height;
    int age;
    char gender;
    float BMI;
    float BFP;


    cout << "Enter your weight in kgs :" ;
    cin >> weight;
    cout << "Enter your height in metres  :";
    cin >> height;

    cout << "Enter your age :" ;
    cin >> age;

    cout << "Enter your Gender F or M :";
    cin >> gender;

    BMI = weight / (int(height) ^2);
    if (BMI < 18.5 ) {
        cout<< "Your BMI states you are " << "Underweight" << "\n";
    } else if (18.5 >=BMI <= 24.9) {
        cout<< "Your BMI states you are " << "Normal" << "\n";
    } else if (25>=BMI <=29.9) 
    {
    cout << "Your BMI states you are " <<"Overweight" << "\n";    
    } else if (30.0 >=BMI <=39.9)
    {
    cout << "Your BMI states you are " << "Obesity" << "\n";
    } else if (BMI >=40){
        cout << "Your BMI states you are " << "Extreme Obesity" << "\n";
    }
    

    if (gender =='M' && age >=18) {
        BFP = 1.20 * BMI + (0.23 * (age - 16.2));
    } else if (gender == 'F' && age >=18)
    {
      BFP = 1.20 * BMI + (0.23 * (age - 5.4));
    } else if (gender == 'M' && age <18)
    {
        BFP = 1.51 * BMI - (0.70 * (age -2.2));
    } else if (gender =='F' && age <18) {
        BFP = 1.52 * BMI - (0.70 * (age + 1.4));
    };

    if (10 >= BFP  <14 && gender == 'F' || 2>=BFP <6 && gender =='M')
    {
        cout<< "Your BFP states you have " << "Essential fat" << "\n";      
    }else if (14>= BFP <21 && gender =='F' || 6>= BFP <14 && gender =='M')
    {
      cout<< "Your BFP states you are at " <<"Athletes" << "\n";
    } else if (21>=BFP <25 && gender =='F' || 14>= BFP <18 && gender =='M') {
        cout << "Your BFP states you are at " << "Fitness" << "\n";
    } else if (25>=BFP <32 && gender =='F' || 18 >=BFP <26 && gender =='M') {
        cout << "Your BFP states you are " << "Average" << "\n";
    } else if (BFP >=32 && gender == 'F' || BFP >=25 && gender =='M') {
        cout << "Your BFP states you are "<< "Obese" <<"|n";
    }
    
    

    
    
    



}