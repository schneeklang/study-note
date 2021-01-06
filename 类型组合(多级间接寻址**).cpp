#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
struct antarctica_years_end
{
    int year;
};
int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = & s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << (arp[1] + 1)->year << endl;
    //arp[1] + 1实际情况为在 &s02 的基础上加1，而并不是等于 arp[2]; arp[1] + 1 = arp[0]
    cout << arp[1] << endl;
    //输出为 0x61fefc
    cout << arp[2] << endl;
    //输出为 0x61fef8
    cout << arp[0] << endl;
    //输出为 0x61ff00
    cout << arp[1] + 1 << endl;
    //输出为 0x61ff00
    cout << arp[0]->year << endl;
    const antarctica_years_end ** ppa = arp;
    //多级间接寻址(指针的指针 ** )可将指针看作地址型参数变量进行套娃，可理解为arp(指向的)地址存储的数据类型为地址
    auto ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*ppb)->year << endl;
    cout << (**ppa).year << endl;
    cout << (*(ppb + 1))->year << endl;
    cout << arp[0] << endl;
    cout << (antarctica_years_end *)arp << endl;
    system("pause");
    return 0;
}
