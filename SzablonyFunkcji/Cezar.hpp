#include <iostream>
#include<string>
using namespace std;

template<typename T>
string Cezar(string &wiadomosc, T szyfr)
{
	for (int i = 0; i < wiadomosc.length(); i++)
	{
		if (wiadomosc[i] >= 'a' && wiadomosc[i] <= 'z')
			wiadomosc[i] = (wiadomosc[i] - 'a' + szyfr) % 26 + 'a';
		else if (wiadomosc[i] >= 'A' && wiadomosc[i] <= 'Z')
			wiadomosc[i] = (wiadomosc[i] - 'A' + szyfr) % 26 + 'A';
		else
			wiadomosc[i] = wiadomosc[i];
	}
	return wiadomosc;
}
template<typename T>
string deszyfruj(string& wiadomosc_, T szyfr_)
{
	Cezar(wiadomosc_,-szyfr_);
	return wiadomosc_;
}