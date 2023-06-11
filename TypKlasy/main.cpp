#include <iostream>
#include<string>
using namespace std;
class Komiks {
public:
	string tytul;
	string autor;
	string wydawca;
	void wczytaj()
	{
		cout << "Podaj tytul: \n";
		getline(cin, tytul);
		cout << "Podaj autora: \n";
		getline(cin, autor);
		cout << "Poodaj wydawce: \n";
		getline(cin, wydawca);
	}
	void wypisz()
	{
		cout << "Tytul: " << tytul << endl;
		cout << "Autor: " << autor << endl;
		cout << "Wydawca: " << wydawca << endl;
	}
};
void zaladuj(Komiks &c)
{
	cout << "Podaj tytul: \n";
	getline(cin, c.tytul);
	cout << "Podaj autora: \n";
	getline(cin, c.autor);
	cout << "Poodaj wydawce: \n";
	getline(cin, c.wydawca);
}
void wyswietl(Komiks c)
{
	cout << "Tytul: " << c.tytul << endl;
	cout << "Autor: " << c.autor << endl;
	cout << "Wydawca: " << c.wydawca << endl;
}
int main()
{
	Komiks c1;
	c1.wczytaj();
	c1.wypisz();
	Komiks c2;
	zaladuj(c2);
	wyswietl(c2);
}// Po zmianie dostępu do pól klasy z publicznego na prywatny, funkcje składowe nadal będą działać, natomiast funkcje, które nie są składowymi 
// klasy przestaną działać, ponieważ dostęp do pól klasy mają tylko fukncje składowe i zapobiega to nadpisywaniu naszych zmiennych.