#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>


using namespace std;


class Postac
{
protected:
string imie;
int sila;
int zycie;
int reputacja;

public:
	virtual void wczytaj() = 0;
	virtual void pojedynek() = 0;
	virtual void zapis() = 0;


	friend void bitwa(Postac* A, Postac* B);
	template <class Typ1, class Typ2 >
	friend void sedzia(Typ1 A, Typ2 B);
};


class Wiedzmin : public Postac
{
private:
    string* walka;

public:
	Wiedzmin(); 
	Wiedzmin(string a);
	void wczytaj();
	void pojedynek();
	void zapis();
	
	
	friend ostream & operator<<(ostream & wejscie, Wiedzmin A);
	friend void bitwa(Postac* A, Postac* B);
	template <class Typ1, class Typ2 >
	friend void sedzia(Typ1 A, Typ2 B);
	
};

class Czarodziejka : public Postac
{
private:
    string* czary;

public:
	Czarodziejka();
	Czarodziejka(string a);
	void wczytaj();
	void pojedynek();
	void zapis();
	
	friend ostream & operator<<(ostream & wejscie, Czarodziejka A);

	friend void bitwa(Postac* A, Postac* B);
	template <class Typ1, class Typ2 >
	friend void sedzia(Typ1 A, Typ2 B);

};

class Elf :public Postac
{
private:
    string* technika; 

public:
	Elf();
	Elf(string a);
	void wczytaj();
	void pojedynek();
	void zapis();
	
	friend ostream & operator<<(ostream & , Elf );

	friend void bitwa(Postac* A, Postac* B);
	template <class Typ1, class Typ2 >
	friend void sedzia(Typ1 A, Typ2 B);

	
};


void bitwa(Postac* A, Postac*B);

template <class Typ1, class Typ2 >
void sedzia(Typ1 A, Typ2 B);

void historia();
int obsluga_main();


ostream & operator<<(ostream & wejscie, Wiedzmin A);
ostream & operator<<(ostream & wejscie, Czarodziejka A);
ostream & operator<<(ostream & wejscie, Elf A);

