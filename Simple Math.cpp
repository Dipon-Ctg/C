#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int num1,num2,sum,sub,mul,div,rem;
    cout << "Enter first number :";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    sum= num1+num2;
    cout << "Sum value: " << sum <<endl;
    sub=num1-num2;
    cout<<"Subtraction value: " <<sub<<endl;
    mul=num1*num2;
    cout << "Multiplication value: " <<mul<<endl;
    div=num1/num2;
    cout << "Division value: "<< div<<endl;
    rem=num1%num2;
    cout<< "Remain value after division :" << rem<<endl;
    getch ();
    //return 0;
}
