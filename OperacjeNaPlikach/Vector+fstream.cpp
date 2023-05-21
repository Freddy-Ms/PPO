#include <iostream>
#include "Funkcje.hpp"
using namespace std;
int main()
{
	vector<Student> Studenci;
	int liczbastudentow = 2;
	ilestudentow(Studenci, liczbastudentow);
	cout << zPliku(Studenci, liczbastudentow, "Studenci.txt") << endl;
	dodajdovektora(Studenci, liczbastudentow);
	cout << doPliku(Studenci, liczbastudentow, "Studenci.txt") << endl;
	for(int i =0; i < liczbastudentow;i++)
	wyswietl(Studenci[i]);
}