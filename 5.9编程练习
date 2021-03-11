/*1*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    int lower, upper;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    long sum = 0;
    for(int i = lower; i <= upper; i++)
    {
        sum += i;
    }
    cout << "The sum of " << lower << " to " << upper << " is " << sum << endl;
    return 0;
}

/*2*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <array>
using namespace std;
const int ArSize = 16;

int main()
{
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for(int i = 1; i < ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for(int j = 0; j < 16; j++)
    {
        cout << j << "!" << " = " << factorials[j] << endl;
    }
    long double factorial = 1;
    //只用long long 类型的数据无法存储100！的结果，long double 显示结果时使用科学计数法
    for(int k = 1; k <= 100; k++)
    {
        factorial *= k;
    }
    cout << "100! = " << factorial << endl;  
    return 0;
}

/*3*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <array>
using namespace std;
const int ArSize = 16;

int main()
{
    long double number, sum = 0;
    do
    {
        cout << "Enter a number:";
        cin >> number;
        sum += number;
        cout << "Now the sum is " << sum << endl;
    }while(number != 0);
    return 0;
}/*4*/
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <array>
using namespace std;
const int ArSize = 16;

int main()
{
    long double sD = 100, sC =100;
    int years;
    for(int i = 1; sC <= sD; i++)
    {
        sD = 100 + 10 * i;
        sC = sC + sC * 0.05;
        years = i;
    }
    cout << "After " << years << " years,";
    cout << "Cleo have " << sC << " and Daphne have " << sD << endl;
    return 0;
}
