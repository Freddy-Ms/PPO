#include <iostream>
#include "Figura.hpp"
using namespace std;
class Trojkat :public Figura {
private:
	float bok_, wysokosc_;
public:
	Trojkat();
	Trojkat(float a, float h);
	~Trojkat() {};
	void wys();
	void zmien();
	float obliczobwod();
	float obliczpole();
	void wyswietlpoleobwod();
};