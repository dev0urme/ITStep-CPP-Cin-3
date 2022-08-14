#include <iostream>
#include <cmath>

using namespace std;
//Сколько товара ценой Y можно купить на Х гривен и сколько получить сдачи?
//How much of a certain good priced Y UAH could be bought using X amount of UAH, and how much change would one recieve?
int main()
{
    float price, total;
    cout << "Enter the price of a desired purchase(in UAH):\n";
    cin >> price;
    cout << "Enter a total amount availible(in UAH):\n";
    cin >> total;
    int frac = total / price;
    float change = total - (frac * price);
    cout << frac << " purchases of an item of specified price can be completed;\n";
    cout << change << " UAH would be left over as change.";
}
