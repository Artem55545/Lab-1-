/************************
* Имя:     Мусаев Артём *
* Задание: 1            *
* Вариант: 3            *
************************/

#include <iostream>
#include <cmath>

int main() {
	using namespace std;


	double alpha;
	int viNull;
	double g;
	double pi = M_PI;
	double j;
	double h;
	double l;
	double r1;
	double r2;

	cout << " if alpha = 14; g =9.81; viNull =750" << endl;
	cout << "alha = ";
	cin >> alpha;
	cout << "g = ";
	cin >> g;
	cout << "viNull = ";
	cin >> viNull;

	j = ((2 * viNull * sin((alpha * pi) / 180))) / g;
	h = ((pow(viNull, 2) * pow(sin((alpha * pi) / 180), 2))) / (2 * g);
	l = ((pow(viNull, 2) * sin(2 * ((alpha * pi) / 180)))) / g;
	r1 = (pow(viNull, 2)) / (g * cos((alpha * pi) / 180));
	r2 = (pow(viNull, 2) * pow(cos((alpha * pi) / 180), 2)) / g;


	cout << "j =" << j << '\n'
		<< "h =" << h << '\n'
		<< "l =" << l << '\n'
		<< "r1 =" << r1 << '\n'
		<< "r2 =" << r2 << endl;

	return 0;
}
