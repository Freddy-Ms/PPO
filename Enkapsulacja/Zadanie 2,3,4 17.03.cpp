#include<iostream>
using namespace std;
class Pokoj 
{
private:
	string nazwa = "Pokoj";
	float dlugosc = 2.5;
	float wysokosc;
	float szerokosc;
public:
	//Pokoj(string,float,float,float);
	Pokoj()
	{
		 cout << "Nadanie wartosci - konstruktor domyslny." << endl;
	}
	~Pokoj()
	{
		cout << "Likwidacja!" << endl;
	}
	void wyswietl_dane()
	{
		cout << nazwa << endl;
		cout << "Dlugosc:" <<  dlugosc << endl;
		cout << "Wysokosc:" << wysokosc << endl;
		cout << "Szerokosc:" << szerokosc << endl;
	}
};

/*Pokoj::Pokoj(string n, float d, float w, float s)
{
	cout << "Nadanie wartosci - konstruktor wieloargumentowy" << endl;
	nazwa = n;
	dlugosc = d;
	wysokosc = w;
	szerokosc = s;
}
*/

int main()
{
	Pokoj a;
	a.wyswietl_dane();
}// Wartości tak zainicjalizowanego obiektu są losowe (pozostałości w pamięci komputera).
// Tak
// Destruktor zawsze działa na samym końcu programu i służy do czyszczenia pamięci2, jego "działania" nie jesteśmy w stanie zobaczyć.


/*
Pokoj::Pokoj(float DLUGOSC, float WYSOKOSC, float SZEROKOSC, string NAZWA) : dlugosc(DLUGOSC) , wysokosc(WYSOKOSC) , szerokosc(SZEROKOSC), nazwa(NAZWA);
{
	cout << "Nadanie wartosci - konstruktor wieloargumentowy" << endl;
	Tylko jeden destruktor!
	const przed wszystkimi wartościami float.
}*/