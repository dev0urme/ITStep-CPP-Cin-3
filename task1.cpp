#include <iostream>
#include <cmath>

using namespace std;
//Ввести с клавиатуры 3-значное число и удалить из него среднюю цифру (например, ввести 3, 5, 7 – получить и вывести число 37).
//Write a program that deletes a middle figure from a three digit number(3,5,7 to 37, etc.)
int main()
{
    int poof;
    cout << "This program is meant to delete the middle figure in a specified three digit number.\n";
    cout << "Input a 3-digit number:\n";
    cin >> poof;
    int poofy = poof / 100 * 10 + poof % 10;
    cout << "The number will be equal to: " << poofy;
}
