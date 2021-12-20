#include <iostream>

using namespace std;

int main()
{
    string Adjective,NameOfPerson,PluralNoun1,PluralNoun2,YourName;
    cout << "Enter Adjective: ";
    getline (cin,Adjective);
    cout << "Enter Name of Person: ";
    getline (cin,NameOfPerson);
    cout << "Plural Noun1: ";
    getline (cin,PluralNoun1);
    cout << "Plural Noun2: ";
    getline (cin,PluralNoun2);
    cout << "Enter your name: ";
    getline (cin,YourName);


    cout << "World best " << Adjective << " game. \n";
    cout << "Dear," << NameOfPerson << "\n";
    cout << PluralNoun1 << " are red. \n";
    cout << PluralNoun2 << " are blue. \n";
    cout << "You love me and I love " << NameOfPerson << "\n";
    cout << "From " << YourName;

    return 0;
}
