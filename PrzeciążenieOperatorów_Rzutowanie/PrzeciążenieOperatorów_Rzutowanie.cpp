#include <iostream>
#include <vector>
using namespace std;
class Vector{
public:
	int x,y,z;
public:
	Vector(int X, int Y, int Z):x(X),y(Y),z(Z){};
	Vector();
	~Vector(){};
	/*friend ostream& operator<<(ostream& out, const Vector& a);
	friend istream& operator>>(istream& in, const Vector& a);
	Vector operator+( Vector &a)
	{
		return Vector(x + a.x, y + a.y, z + a.z);
	}*/
};
class zbior {
public:
	vector <Vector> tab;
	zbior() {};
//	zbior operator+=()
};
 ostream& operator<<(ostream& out, const Vector& a) {
	return out << a.x << " " << a.y << " " << a.z << endl;
}
 istream& operator>>(istream& in, Vector& a) {
	in >> a.x >> a.y >> a.z;
	return in;
}
 Vector operator+(const Vector& a, const Vector& b)
 {
	 return Vector(a.x + b.x, a.y + b.y, a.z + b.z);
 }



int main()
{
	Vector jeden(1,2,3);
	cout << jeden;
	cin >> jeden;
	cout << jeden;
	Vector dwa(4, 5, 7);
	cout << jeden + dwa << endl;
	zbior a;
	a[0] = jeden;
	cout << a[0];
	
	return 0;

}
/*
* 1.Po zmianie implementacji efekt działanie był ten sam.
* 2. W implementacji należało zmienić dostęp do pól w klasie na publiczne, żeby funkcje globalne miały do tych danych dostęp
* oraz przy dodawaniu Vectorów należało jako argument przyjąć dwa argumenty, a nie jeden.
* 3. Należało użyć mechanizmu przyjaźni - "friend",aby korzystać z prywatnych pól klasy. Słówko friend oznacza funkcje zaprzyjaźnioną,
* dzięki czemu ma ona dostęp do pól prywatnych.
* 
* 
*/