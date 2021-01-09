/*4.13.1&2编程练习*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    string fname, lname;
    int age;
    char grade;
    cout << "What is your first name? ";
    getline(cin,fname);
    cout << "What is your last name? ";
    getline(cin,lname);// getline获取string类，及string类的io
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << fname <<  "," << lname << endl;
    cout << "Grade: " << (char)(grade + 1) << endl;
    cout << "Age: " << age << endl;
    // system("pause");
    return 0;
}

/*4.13.3&4编程练习*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    /*
    char fname[20], lname[20];
    cout << "Enter your first name: ";
    cin.getline(fname,20);
    cout << "Enter your last name: ";
    cin >> lname;
    char name[strlen(fname) + strlen(lname) + 3];
    strcpy(name,fname);
    strcat(name,", ");
    //字符串都用双引号 
    strcat(name,lname);
    cout << "Here's the information in a single string: " << name << endl;
    */
   string fname, lname, name;
   cout << "Enter your first name: ";
   getline(cin,fname);
   cout << "Enter your last name: ";
   getline(cin,lname);
   name = fname + ", " + lname;
   //同上使用字符串时都用双引号
   cout << "Here's the information in a single string: " << name << endl;
    // system("pause");
    return 0;
}

/*4.13.5&6编程练习*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;

struct CandyBar 
{
    string brand;
    float weight;
    int content;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    //注意string类加双引号
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Content: " << snack.content << endl;
    return 0;
}

/*4.13.7&8*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
using namespace std;

struct CandyBar 
{
    string brand;
    float weight;
    int content;
};

int main()
{
    CandyBar * snack = new CandyBar;
    cout << "Enter the weight: ";
    (cin >> snack -> weight).get(); 
    //cin和getline及get混合使用时需注意不同指令对enter的处理
    cout << "Enter the brand: ";
    getline(cin,snack -> brand);
    cout << "Enter the content: ";
    cin >> snack -> content;
    //注意string类加双引号
    cout << "Brand: " << snack -> brand << endl;
    cout << "Weight: " << snack -> weight << endl;
    cout << "Content: " << snack -> content << endl;
    return 0;
}

/*4.13.10编程练习*/
#include<iostream>
#include<cstring>
#include <stdlib.h>
#include <array>
using namespace std;

int main()
{
    array<double,3> report;
    cout << "The first time: ";
    cin >> report[0];
    //在调用时和数组类似
    cout << "The second time: ";
    cin >> report[1];
    cout << "The third time: ";
    cin >> report[2];
    cout << report[0] << endl;
    cout << report[1] << endl;
    cout << report[2] << endl;
    return 0;
}


