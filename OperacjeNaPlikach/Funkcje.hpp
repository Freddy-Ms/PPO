#pragma once
#include <vector>
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
class Student {
public:
	string imie, nazwisko, indeks, plec;
	int wiek;
};
void wyswietl(Student P)
{
	cout << P.imie << " " << P.nazwisko << " " << P.indeks << " " << P.plec << " " << P.wiek << endl;
}
void ilestudentow(vector<Student>& tab, int ile)
{
	Student pomoc;
	for (int i = 0; i < ile; i++)
	{
		pomoc.imie = " ";
		pomoc.nazwisko = " ";
		pomoc.indeks = " ";
		pomoc.plec = " ";
		pomoc.wiek = 0;
		tab.push_back(pomoc);
	}
	
}
string doPliku(vector<Student>& tab, int ile, string nazwapliku)
{
	fstream plik;
	plik.open(nazwapliku, fstream::out);
		if (plik.is_open())
		{
			for (int i = 0; i < ile; i++) {
				plik << tab[i].imie << " " << tab[i].nazwisko << " " << tab[i].indeks << " " << tab[i].plec << " " << tab[i].wiek << endl;
			}plik.close();
			return "Pomyslnie zapisano dane!";
		}
		else
			return "Nie udalo sie utworzyc pliku.";

}
string zPliku(vector<Student>& tab, int ile, string nazwapliku)
{
	fstream plik;
	plik.open(nazwapliku, fstream::in);
	if (plik.is_open())
	{
		for (int i = 0; i < ile; i++)
		{
			plik >> tab[i].imie >> tab[i].nazwisko >> tab[i].indeks >> tab[i].plec >> tab[i].wiek;
		} plik.close(); return "Odczytano dane.";
	}
	else return "Nie mozna zapisac danych.";
}
void dodajdovektora(vector<Student>& tab, int &ile)
{
	Student pomoc;
	cin >> pomoc.imie >> pomoc.nazwisko >> pomoc.indeks >> pomoc.plec >> pomoc.wiek;
	tab.push_back(pomoc);
	ile++;
	
}