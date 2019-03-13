#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, additionalBondsAmount, hoursWorked;
    
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENTAGE_OF_INCOME = 0.10;
    const double SCHOOL_PERCENTAGE_OF_INCOME = 0.01;
    const double SAVINGS_BONDS_PERCENTAGE_OF_INCOME = 0.25;
    const double ADDITIONAL_BONDS_AMOUNT = 0.50;
    
    cout << "Number of hours you worked for each week: ";
    cin >> hoursWorked;
    
    cout << "Hourly rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TAX_RATE;
    clothesAmount = netIncome * CLOTHES_PERCENTAGE_OF_INCOME;
    schoolAmount = netIncome * SCHOOL_PERCENTAGE_OF_INCOME;
    netIncome -= (clothesAmount + schoolAmount); // Calculate what is now left
    bondsAmount = netIncome * SAVINGS_BONDS_PERCENTAGE_OF_INCOME;
    additionalBondsAmount = bondsAmount * ADDITIONAL_BONDS_AMOUNT;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Other Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Additional Bonds: $" <<additionalBondsAmount << endl;
    
    _getch();
    return 0;
}