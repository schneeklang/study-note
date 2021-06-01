/*5.1.2使用for循环访问数组成员_学习笔记*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
#include <array>
using namespace std;

int main()
{
    long long factorials[16];
    factorials[1] = factorials[0] = 1ll;
    //用数组来处理循环类型的数据存储，注意 1LL 及相关数据类型的选择
    for (int i = 1; i < 16; i++)
        factorials[i] = factorials[i -1] * i;
    //for循环中步长表达式(i++)可修改如:i = i * i + 10；同理检测条件亦可修改
    for (int j = 0; j < 16; j++)
        cout << j << "! = " << factorials[j] << endl; 
    return 0;
}

/*5.1.4使用for循环访问字符串*/
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <array>
using namespace std;

int main()
{
    cout << "Enter a word: ";
    string word;
    cin >> word;
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << endl;
    cout << "Bye.";
    return 0;
}
/*
string world;
cin >> world;
cout << world[i];
以上表达式合法，string类字符串和数组访问相似
*/

/*重要: 语句: x = 2 * x++ * (3 - --x)在不同的系统上将会有不同的结果*/

/*5.1.6副作用和顺序点*/

/*5.1.14&15strcmp(字符串数组比较函数);string类的比较可以用 != 运算符*/
/*5.13强制类型转换时出现Bus error(总线错误)*/
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <array>
using namespace std;

int main()
{
    char name[20];
    cout << "Your first name, Please: ";
    cin >> name;
    cout << "Here's your name,verticalized and ASCIIized:\n";
    int i;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) <<endl;
        //强制类型转换出现总线错误(bus error)
        i++;
    }
    return 0;

/*5.2.2延时循环及相关的ctime头文件以及clock()函数*/
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <array>
#include <ctime>
using namespace std;


int main()
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    //clock_t 为clock()函数返回类型的别名
    //秒数乘以常数CLOCKS_PER_SEC可转换为系统时间
    cout << "starting\a\n";
    clock_t start = clock();
    //click() 函数返回程序执行到当前的系统时间
    while (clock() - start < delay);
    cout << "done \a\n";
    return 0;
}

/*5.5.4文件尾条件,检测文件尾(EOF)P129*/
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <array>
#include <ctime>
using namespace std;


int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit: \n";
    cin.get(ch);
    //在检测到模拟EOF后cin.eof()或cin.fail()将会返回true,否则返回false;检测条件可改为!cin.fail()
    //和while(cin)cin在读取成功后会转换得到bool类型的值true，否则会转换为false;最后可精简成cin.get(ch)
    while (cin.fail() == false)
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}



