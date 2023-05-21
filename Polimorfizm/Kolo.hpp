#include <iostream>
#include "Figura.hpp"
using namespace std;
class Kolo:public Figura {
private:
	float promien_;
public:
	Kolo();
	Kolo(float a);
	~Kolo() {};
	void wys();
	void zmien();
	float obliczobwod();
	float obliczpole();
	void wyswietlpoleobwod();
};