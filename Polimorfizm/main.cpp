#include <iostream>
#include "Figura.hpp"
#include "Kolo.hpp"
#include "Trojkat.hpp"

using namespace std;

int main()
{

	Kolo b(5.5);
	Trojkat a(3.5, 4.2);
	char wybor = '1';
	Figura* wsk = nullptr;
	if (wybor == '1')
		wsk = &a;
	else
		wsk = &b;
	wsk->wys();
	wsk->wyswietlpoleobwod();
	wsk->zmien();
	wsk->wys();
	wsk->wyswietlpoleobwod();
}
/*
 Pytanie 1 
 Podaj nazwę cechy, która pozwala na różne zachowanie tych samych metod wirtualnych?
 Polimorfizm
 Pytanie 2
 Jak myślisz, dlaczego pola klasy Figura są protected, a nie private?
 Aby klasy pochodne miał dostęp do pole_ i obwod_ w Figura.
	Obiekt klasy pochodnej może być wskazywany przez wskaźnik klasy bazowej. Przypisanie wskaźnika klasy bazowej do wskaźnika klasy pochodnej jest błędem.
*/
