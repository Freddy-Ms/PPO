#include <iostream>
#include "Trojkat.hpp"
using namespace std;
Trojkat::Trojkat() {
	bok_ = 0.0;
	wysokosc_ = 0.0;
}
Trojkat::Trojkat(float a, float h)
{
	bok_ = a;
	wysokosc_ = h;
	pole_ = a * h / 2;
	obwod_ = 3 * a;
}
void Trojkat::wys()
{
	cout << "Dlugosc boku wynosi: " << bok_ << endl;
	cout << "Dlugosc wysokosci wynosi: " << wysokosc_ << endl;
}
void Trojkat::zmien()
{
	cout << "Podaj bok i wysokosc trojkata: ";
	float a, h;
	cin >> a >> h;
	bok_ = a;
	wysokosc_ = h;
	pole_ = obliczpole();
	obwod_ = obliczobwod();
}
float Trojkat::obliczobwod() {
	obwod_ = 3 * bok_;
	return obwod_;
}
float Trojkat::obliczpole() {
	pole_ = (bok_ * wysokosc_) / 2;
	return pole_;
}
void Trojkat::wyswietlpoleobwod()
{
	cout << "Pole trojkata wynosi: " << pole_ << endl;
	cout << "Obwod trojkata wynosi: " << obwod_ << endl;
}