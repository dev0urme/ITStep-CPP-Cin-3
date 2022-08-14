//Ввести длину, ширину и высоту комнаты. 
//Подсчитать, сколько краски уйдет на покраску стен этой комнаты, 
//Eсли на 1м2 стены приходится N литров краски и M% поверхности стен занимают окна и двери.
//Также, рассчитать общую стоимость краски, с учётом того, что один литр краски стоит R гривен. 
#include "iostream"
#include "cmath"

using namespace std;
//Write a program that calculates the amount of paint that would be used for painting a room, while accounting for 
//the M% of total that is occupied by doors and windows, and the N litres of paint that would be used per 1m2 of total area.
//It should also calculate the total cost of the used paint, considering that 1 litre costs R UAH.
int main()
{
	float length, width, height;
	cout << "This program is meant to calculate how much time should be spent for painting a room of a specified size; Also how much it should cost.\n";
	cout << "Input length(in meters): ";
	cin >> length;
	cout << "\nInput width(in meters): ";
	cin >> width;
	cout << "\nInput height(in meters): ";
	cin >> height;
	float UAH, Wallspace, Litre;
	cout << "\nInput the amount of paint used per square meter of painting(liters): ";
	cin >> Litre;
	cout << "\nInput the percentage of the overall space are used for do doors and windows(%): ";
	cin >> Wallspace;
	cout << "\nInput the cost in UAH of one litre of paint : ";
	cin >> UAH;
	float area = 2 * (width * height + height * length);
	cout << "It will take " << (area * ((100 - Wallspace) / 10)) / 10 << " liters of paint. \n";
	cout << "It will cost " << ((area * ((100 - Wallspace) / 10)) * UAH)/10 << " UAH.";
}
