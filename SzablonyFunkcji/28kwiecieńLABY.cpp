#include <iostream>
#include<math.h>
#include"Cezar.hpp"
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
#include "Kalkulator.hpp"
using namespace std;
template <typename T>
T mniejsza(T wartosc1, T wartosc2)
{
	if (wartosc1 > wartosc2)
		return wartosc2;
	else
		return wartosc1;
	
}
//template<typename T>
//class Kalkulator {
//private:
//	T wartosc1;
//	T wartosc2;
//public:
//	Kalkulator(T value1, T value2) : wartosc1(value1), wartosc2(value2) {};
//	T dodawanie()
//	{
//		return wartosc1 + wartosc2;
//	};
//	T odejmowanie()
//	{
//		return wartosc1 - wartosc2;
//	};
//	T mnozenie()
//	{
//		return wartosc1 * wartosc2;
//	};
//	T dzielenie()
//	{
//		if (!wartosc2)
//			return 0;
//		else
//			return wartosc1 / wartosc2;
//	};
//	T kwadrat()
//	{
//		return wartosc1 * wartosc1;
//	};
//	T pi()
//	{
//		return wartosc1 * M_PI;
//	};
//	void wys()
//	{
//		cout << dodawanie() << " " << odejmowanie() << endl;
//		cout << mnozenie() << " " << dzielenie() << endl;
//		cout << kwadrat() << " " << pi() << endl;
//	};
//};
int main()
{
	int x = 2; int y = 3;
	cout << mniejsza(x, y) << endl;
	float a = 2.3; float b = 3.4;
	cout << mniejsza(a, b) << endl;
	double c = 5.555; double d = 6.666;
	cout << mniejsza(c, d) << endl;
	Kalkulator<int> INTY(2, 4);
	INTY.wys();
	Kalkulator<double> DOUBLY(2.22, 3.33);
	DOUBLY.wys();
	string abc = "Marta";
	Cezar(abc, 3);
	cout << abc << endl;
	deszyfruj(abc, 3);
	cout << abc;
}
