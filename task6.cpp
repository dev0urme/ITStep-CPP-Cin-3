#include "iostream"
#include "cmath"

using namespace std;
//Ввести с клавиатуры 3-значное число и «перевернуть» его (например, ввести 357 – получить и вывести 753).
//Write a program that inverts a three digit number (357 to 753 etc.)
int main()
{
	int num;
	cout << "Enter a number for flopping: \n";
	cin >> num;
	int flop = num % 10;
	num /= 10;
	cout << flop;
	flop = num % 10;
	cout << flop;
	flop = num / 10;
	cout << flop;
}
