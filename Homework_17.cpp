#include <iostream>

using namespace std;

class Vector
{
private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

	double VectorLength = 0;

public:
	void Output()
	{
		//Выводим начальные координаты.
		cout << "Initial coordinates: " << "x = " << x << " y = " << y << " z = " << z << endl << endl;

		//Вводим новые координаты вектора.
		cout << "Enter the x coordinate: ";
		cin >> x;
		cout << "Enter the y coordinate: ";
		cin >> y;
		cout << "Enter the z coordinate: ";
		cin >> z;
		cout << endl;

		//Вектор с введёнными нами координатами.
		cout << "Vector with coordinates: " << "x = " << x  << " y = " << y << " z = " << z << endl;

		//Находим длину вектора и выводим результат.
		VectorLength = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		cout << "Length Vector = " << VectorLength << endl;
	}
};

int main()
{
	Vector v;
	v.Output();

	return 0;
}