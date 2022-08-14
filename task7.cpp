#include "iostream"
#include "cmath"

using namespace std;
//Ввести пятизначное число и сдвинуть его циклически вправо на 2 разряда (например, если число равно 12345 – вывести на экран 45123).
//Write a program that shifts a five digit number two positions forward cyclically(12345 to 45123, etc.)
int main()
{
    int jump = 2;
    string floppa;
    cout << "Input a five figure number for flopping: ";
    cin >> floppa;

    int body = jump % floppa.size();
    cout << "Look at it go!(I got help for this one): ";
    cout << string(floppa.begin() + body, floppa.end()) << string(floppa.begin(), floppa.begin() + body);
}

