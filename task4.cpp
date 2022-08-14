#include <iostream>
#include <cmath>

using namespace std;
//Написать программу, которая переводит фунты в килограммы.
//**Один фунт – 405.9 грамма задается в программе как константа. Затем, реализовать обратный перевод – из килограммов в фунты.
//Write a program that converts lbs to kg.
int main()
{
    const float conv = 405.9;
    const float convc = 2.2046;
    float lbs;
    cout << "Enter a value in lbs:\n";
    cin >> lbs;
    float kg = conv * lbs / 1000;
    cout << "The specified value in pounds will translate to " << kg << " kilograms(kg)\n";
    float kgc;
    cout << "Enter a value in kg:\n";
    cin >> kgc;
    float lbsc = kgc*convc;
    cout << "The specified value in kilograms will translate to " << lbsc << " pounds(lbs)\n";
    
}
