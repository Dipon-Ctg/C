#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    double num1,num2;
    char op;

    cout << "Enter first Number: ";
    cin >> num1;

    cout << "Enter second Number: ";
    cin >> num2;

    cout <<"Select operator (+,-,*,/): ";
    cin >> op;

    switch(op)
    {
    case '+':
        cout << num1 << '+' << num2 << "=" << (num1+num2);
        break;
     case '-':
        cout << num1 << '-' << num2 << "=" << (num1-num2);
        break;
     case '*':
        cout << num1 << '*' << num2 << "=" << (num1*num2);
        break;
     case '/':
        cout << num1 << '/' << num2 << "=" << (num1/num2);
        break;
     default :
        cout << op << " is invalid operator";
    }

    //cout << "Hello world!" << endl;
    return 0;
}
