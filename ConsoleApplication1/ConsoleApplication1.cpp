#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	const float PI = 3.14159265358979323846;
	cout << "Введите длину диаметра окружности d: ";
	float d;
	cin >> d;
	float L = 2 * PI * (0.5 * d);
	cout << "Длина окружности L равна: " << L;
}
