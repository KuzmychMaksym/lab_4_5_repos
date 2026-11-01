// lab_4_5.cpp 
// Кузьмич Максим 
// Лабораторна робота № 4_5
// Подання у плоску фігуру 
// Варіант 27

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y;
	int R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++) {

		cout << "try: " << i + 1 << endl;
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if (((pow(x + R, 2) + pow(y - R, 2)) <= pow(R, 2)) || (x >= 0 && x <= 2 * R && y >= -R && y <= 0)) {
			cout << "yes" << endl;
		}
		else {	
			cout << "no" << endl;
		}
	}

	cout << fixed;

	for (int i = 0; i < 10; i++) {

		x = 4.0 * R*rand() / RAND_MAX - 2 * R;
		y = 4.0 * R*rand() / RAND_MAX - 2 * R;

		cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " ";

		if (((pow(x + R, 2) + pow(y - R, 2)) <= pow(R, 2)) || (x >= 0 && x <= 2 * R && y >= -R && y <= 0)) {
			cout<< "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}

