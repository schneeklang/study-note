/*6.11.5*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double income, tax;
    char grade;
    cout << "Please enter your income:";
    while ((cin >> income) && (income >= 0))
    {
        if (income <= 5000.0)
            grade = 'a';
        else if ((income > 5000.0) && (income <= 15000.0))
            grade = 'b';
        else if (income > 35000)
            grade = 'd';
        else 
            grade = 'c';
        switch (grade)
        {
            case 'a': tax = 0;
            break;
            case 'b': tax = (income - 5000) * 0.1;
            break;
            case 'c': tax = 5000.0 * 0 + 10000.0 * 0.1 + (income - 15000) * 0.15;
            break;
            case 'd': tax = 10000.0 * 0.1 + 20000.0 * 0.15 + (income - 35000) * 0.20;
            break;
        }
    cout << "You should pay " << tax << " tvarp." << endl;
    cout << "Please enter your income:"; 
    }
    return 0;
}//剩余习题未做
