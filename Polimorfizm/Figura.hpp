#include <iostream>
using namespace std;
#pragma once
class Figura {
protected:
	float pole_, obwod_;
public:
	Figura() {
		pole_ = 0.0;
		obwod_ = 0.0;
	};
	virtual ~Figura() {};
	virtual void wys() = 0;
	virtual void zmien() = 0;
	virtual float obliczobwod() = 0;
	virtual float obliczpole() = 0;
	virtual void wyswietlpoleobwod() = 0;
};