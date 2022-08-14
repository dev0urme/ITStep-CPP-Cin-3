#include "iostream"
#include "cmath"

using namespace std;
//Рассчитать общую массу всех планет Солнечной системы. Вычислить среднее арифметическое масс планет.
//Затем - массу каждой планеты в процентном соотношении, если принять за 100% общую массу всех планет. 
//Во сколько раз масса самой крупной планеты больше чем сумма масс всех остальных планет? Все результаты – показать на экране.
//Write a program that calculates a cumulative mass, of all planets in the solar system, and it's arithmetical mean.
//It also should display a mass of each planet in % ratio, using the cumulative mass as 100%,
//and calculate+display how many times the mass of the largest planet is greater than the rest.
int main()
{
    cout << "This program is meant to calculate and display some data about the Solar System and It's planets.\n";
    double fst = 3.285e23, snd = 4.867e24, trd = 5.972e24, frth = 6.39e23, fth = 1.898e27, sxth = 5.683e26, sth = 8.681e25, eth = 1.024e26;
    double totalmass = (fst + snd + trd + frth + fth + sxth + sth + eth);
    cout << "The combined mass of all planets in Solar System will make " << totalmass/8 << " tons.\n";
    cout << "Mercury takes " << ((fst/totalmass ) * 100) << "% of total mass;\n";
    cout << "Venus takes " << ((snd/totalmass) * 100) << "% of total mass;\n";
    cout << "Earth takes " << ((trd/totalmass) * 100) << "% of total mass;\n";
    cout << "Mars takes " << ((frth/totalmass) * 100) << "% of total mass;\n";
    cout << "Jupiter takes " << ((fth/totalmass) * 100) << "% of total mass;\n";
    cout << "Saturn takes " << ((sxth/totalmass) * 100) << "% of total mass;\n";
    cout << "Uranus takes " << ((sth/totalmass) * 100) << "% of total mass;\n";
    cout << "Neptune takes " << ((eth/totalmass) * 100) << "% of total mass.\n";
    cout << "The heaviest planet is Jupiter, which is approximately " << fth / fst << " times heavier than Mercury;\n";
    cout << fth / snd << " times heavier than Venus;\n";
    cout << fth / trd << " times heavier than Earth;\n";
    cout << fth / frth << " times heavier than Mars;\n";
    cout << fth / sxth << " times heavier than Uranus;\n";
    cout << fth / sth << " times heavier than Saturn;\n";
    cout << fth / eth << " times heavier than Neptune;\n";
    cout << fth / (fst + snd + trd + frth + sxth + sth + eth) << " times heavier than the combined mass of all other planets in Solar System.";
}
