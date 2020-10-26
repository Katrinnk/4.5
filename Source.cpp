// Lab_04_5.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру.
// Варіант 12
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	cout << "R="; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((x <= 0 && y >= 0 && y < R - sqrt(R * R - (x + R) * (x + R))) || (y < 0 && x>0 && y > sqrt(R * R - (x - R) * (x - R) - R)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;
		cout << x << endl;
		if ((x <= 0 && y >= 0 && y < R - sqrt(R * R - (x + R) * (x + R))) || (y < 0 && x>0 && y > sqrt(R * R - (x - R) * (x - R) - R)))
			cout << setw(8) << setprecision(4) << x << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << setw(8) << setprecision(4) << y << "  " << "no" << endl;
	}
	return 0;
}