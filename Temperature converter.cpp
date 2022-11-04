#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    double fahr,cels,fahr2,cels2;

    cout << "\t Welcome in Temperature Converter Machine";
    cout << "\nEnter Temperature in Celsius:" ;
    cin >> cels;

    fahr= 1.8 * cels + 32;
    cout << "Temperature in Fahrenheit is "<< fahr<<endl;

    cout << "Enter Temperature in Fahrenheit: ";
    cin >> fahr2;

    cels2 = (fahr2-32)/1.8;
    cout <<"Temperature in Celsius: " << cels2 <<endl;

    getch();
}
