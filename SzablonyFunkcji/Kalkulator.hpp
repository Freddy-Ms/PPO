
#include <iostream>
using namespace std;

template<typename T>
class Kalkulator {
private:
	T wartosc1;
	T wartosc2;
public:
	Kalkulator(T a, T b);
	T dodawanie();
	T odejmowanie();
	T mnozenie();
	T dzielenie();
	T kwadrat();
	T pi();
	void wys();
};

template<typename T>
Kalkulator<T>::Kalkulator(T a, T b) :wartosc1(a), wartosc2(b) {};
template<typename T>
T Kalkulator<T>::dodawanie()
{
	return wartosc1 + wartosc2;
}
template <typename T>
T Kalkulator<T>::odejmowanie()
{
	return wartosc1 - wartosc2;
}
template <typename T>
T Kalkulator<T>::mnozenie()
{
	return wartosc1 * wartosc2;
}
template <typename T>
T Kalkulator<T>::dzielenie()
{
	if (!wartosc2)
		return 0;
	else
		return wartosc1 / wartosc2;
}
template <typename T>
T Kalkulator<T>::pi()
{
	return wartosc1 * M_PI;
}
template <typename T>
T Kalkulator<T>::kwadrat()
{
	return wartosc1*wartosc1;
}
template<typename T>
void Kalkulator<T>::wys()
{
	cout << dodawanie() << " " << odejmowanie() << endl;
	cout << mnozenie() << " " << dzielenie() << endl;
	cout << kwadrat() << " " << pi() << endl;
}