// INCLUDES
#include <iostream>
using namespace std;
int main()
{
    // CODE START
    float annualSalary;
    cout << "Since your business is very poor, your annual salary will be divided by 12, also you will get to see how much money you will get in 4 years, now enter your annual salary\n";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Since you chose your annual salary as " << annualSalary << " Your monthly salary will be " << monthlySalary << endl;
    cout << "And you will get " << annualSalary * 4 << " in 4 years" << endl;
    cout << "Press enter to exit.";
    system("pause>0");
    // CODE END
}