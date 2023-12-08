#include <iostream>
using namespace std;

int main()
{
    string name;
    string surname;
    std::cout << "Print the name in reverse where last name comes first:\n";
    cout << "-----------------------------------------------------------\n";
    cout << "Input First Name: ";
    cin >> name;
    cout << "\n" << "Input Last Name: ";
    cin >> surname;
    cout << "\n" << "Name in reverse is: " << surname << " " << name;
}