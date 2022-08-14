#include <iostream>
#include <cmath>

using namespace std;
//Написать программу, которая предлагает пользователю ввести сумму денежного вклада в гривнах, 
//а также процент годовых, которые выплачивает банк. Определить сумму денег, выплачиваемых банком вкладчику каждый месяц.
//this program is meant to calculate an annual % that is being paid back by a bank, as well as the amount, based on a specified amount
//of UAH via user input.
int main()
{
    float total, perc, gain;
    cout << "Enter an amount of a deposit (in UAH):\n";
    cin >> total;
    cout << "Input an interest rate (%):\n";
    cin >> perc;
    perc = (perc / 100.0) / 12;
    gain = total * perc;
    cout << gain << " UAH per month will be acquired.";
}
