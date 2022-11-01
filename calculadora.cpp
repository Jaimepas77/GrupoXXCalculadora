#include <iostream>

using namespace std;

int suma(int a, int b)
{
	return a + b;
}

int resta(int a, int b)
{
	return a - b;
}

int multiplicacion(int a, int b)
{
	return a*b;
}

int division(int a, int b)
{
	return a/b;
}

int resto(int a, int b)
{
	return a%b;
}

int main()
{
	cout << "Introduzca dos nums: ";
	int a, b;
	cin >> a >> b,
	cout << "La suma de " << a << " y " << b << " da como resultado " << suma(a, b) << endl;
	cout << "La resta de " << a << " y " << b << " da como resultado " << resta(a, b) << endl;
	cout << "La multiplicacion de " << a << " y " << b << " da como resultado " << multiplicacion(a, b) << endl;
	cout << "La division de " << a << " y " << b << " da como resultado " << division(a, b) << " y como resto " << resto(a, b) << endl;
	cout << "Fin";
}