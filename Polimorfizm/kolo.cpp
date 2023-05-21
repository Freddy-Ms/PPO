#include <iostream>
#include "Kolo.hpp"
Kolo::Kolo() {
	promien_ = 0.0;
};
Kolo::Kolo(float a)
{
	promien_ = a;
	pole_ = 3, 14 * promien_ * promien_;
	obwod_ = 3, 14 * promien_ * 2;
};
void Kolo::wys() {
	cout << "Promien wynosi: " << promien_ << endl;
};
void Kolo::zmien() {
	cout << "Podaj promien: ";
	float a;
	cin >> a;
	promien_ = a;
	obwod_ = obliczobwod();
	pole_ = obliczpole();
};
float Kolo::obliczobwod() {
	obwod_ = 2 * 3, 14 * promien_;
	return obwod_;
}
float Kolo::obliczpole() {
	pole_ = 3, 14 * promien_ * promien_;
	return pole_;
}
void Kolo::wyswietlpoleobwod()
{
	cout << "Pole wynosi: " << pole_ << endl;
	cout << "Obwod wynosi: " << obwod_ << endl;
}