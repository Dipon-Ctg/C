#include <iostream>

using namespace std;

int main()
{
    int pin = 1233;
    int pinNumbers;
    int pinCount=0;
    int pinLimit=3;
    bool wrongPin = false;

    while (pin != pinNumbers && !wrongPin){
        if (pinCount<pinLimit){
            cout << "Enter Pin: ";
            cin >> pinNumbers;
            pinCount++;
        }else{
            wrongPin= true;
        }

    }
    if (wrongPin){
        cout << "\nGood Bye. Your account is locked.Please contract with your bank!\n";
    }else {
        cout << "\nWelcome MR.X\n";
    }
    return 0;
}
