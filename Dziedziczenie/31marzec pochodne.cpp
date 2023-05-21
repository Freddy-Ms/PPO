#include <iostream>
#include <string>
using namespace std;
class Clothes_ {
private:
	float width_;
	string material_;
protected:
	string price;
public:
	~Clothes_()
	{
		cout << "Destruktor - klasa podstawowa Clothes_" << endl;
	}
	Clothes_() : width_{0.0}, material_{"none"}
	{
		cout << "Konstruktor domyslny - klasa podstawowa Clothes." << endl;
	}
	void is_available()
	{
		cout << "Yes, it is available – klasa podstawowa Clothes" << endl;
	}
	float get_width() const 
	{
		return width_;
	}
	string get_material() const
	{
		return material_;
	}
};
class Trousers :public Clothes_ {
public:
	Trousers() : Clothes_()
	{
		cout << "Konstruktor domyślny - klasa pochodna Trousers." << endl;
	};
	~Trousers()
	{
		cout << "Destruktor - klasa pochodna Trousers" << endl;
	}
	void set_price(string n)
	{
		price = n;
	}
	void display_information()
	{
		cout << "Price: " << price << endl;
	}
};
class Skirt :public Clothes_ {
private:
	float width_;
	string material_;
public:
	Skirt(float w, string m) : width_{ w }, material_{ m } {
		cout << "Konstruktor wieloargumentowy - klasa pochodna Skirt.";
	}
	float get_width() const
	{
		return width_;
	}
	string get_material() const
	{
		return material_;
	}
};
int main()
{
	Trousers a;
	a.is_available();
	cout << a.get_material();
	cout << a.get_width();
	a.set_price("150.99");
	a.display_information();
	Skirt b(3.5, "abc");
	cout << b.get_material();
	cout << b.get_width();
	cout << b.Clothes_::get_material();
	cout << b.Clothes_::get_width();
}
/*
Zadanie 2
	(a) Działanie którego konstruktora zaobserowałeś i dlaczego?
	Możemy zaobserwować działanie obydwóch konstruktorów, ponieważ konstruktor klasy pochodnej wykorzystuje konstruktor klasy podstawowej
 do zainicjalizowania danych.
	
	(b)	Czy udało się wywołać metody klasy podstawowej dla obiektu klasy pochodnej? Dlaczego?
	Udało się, ponieważ dziediczenie jest typu public, co za tym idzie ta klasa dziedziczy metody klasy podstawowej.
	
	(c) Czy zauważyłeś działanie destruktora? Jeżeli tak, to jakiego i dlaczego? 
	Możemy zaobserwować działanie obydwóch destruktorów, ponieważ do zainicjalizowania obiektu "a" (Trousers) wykorzystujemy konstruktor klasy 
 podstawowej, co za tym idzie na samym końcu "posprząta" on po sobie.
 Zadanie 3
	Wyjaśnij dlaczego istnieje możliwość nadania wartości polu w klasie podstawowej poprzez metodę
klasy pochodnej?
	Ponieważ dziedziczenie jest publiczne, to funkcja pochodna dziedziczy cechy f. podstawowej protected -> protected, dlatego pochodna ma 
  dostęp do price.
 Zadanie 4
 a)	Wyswietlone zostały wartości przypisane podczas tworzenia obiektu Skirt.
 b) Wartości były inne, podstawowe.
 c)Funkcja ma więcej zmiennych ma 2 pochdone z klasy podstawowej i 2 swoje, dlatego gdy odwolujemy sie do funkcji Skirt uzyskujemy wartosci ktore
nadalismy, a odwołująć się poprzez CLothes:: uzyskujemy wartośći które został od razu zainicjalizowana jako 0 i none
*/