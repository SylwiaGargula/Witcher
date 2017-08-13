#include <iostream>
#include<stdlib.h>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
#include <cstring>
#include<string>
#include"plik1.h"
#include <fstream>


using namespace std;


//*********************wiedzmin*******************



Wiedzmin::Wiedzmin(string a)
{
	imie = a;
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;
	int x = 4;
	
	walka = new string [x];
	walka[0] = "uzywa znaku Aard";
	walka[1] = "uzywa znaku Igni";
	walka[2] = "wykonuje szybki cios mieczem";
	walka[3] = "rzuca petarda";
	
}

Wiedzmin::Wiedzmin()
{
	imie = "Brajanek";
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;

	walka = new string[4];
	walka[0] = "uzywa znaku Aard";
	walka[1] = "uzywa znaku Igni";
	walka[2] = "wykonuje szybki cios mieczem";
	walka[3] = "rzuca petarda";
	
}


void Wiedzmin::wczytaj()
{
	fstream dane;
	dane.open("Wiedzmin.txt", ios::in);

	
if (dane.good())
	
{
		cout << "Odczytywanie" << endl;
		getline(dane, imie);
		 string bufor;
		getline(dane, bufor);
		sila = atoi(bufor.c_str());
		getline(dane, bufor);
		zycie= atoi(bufor.c_str());
		getline(dane, bufor);
		reputacja= atoi(bufor.c_str());
		dane.close();

	}
	else
		cout << "blad" << endl;
}

void Wiedzmin::zapis()
{
	fstream dane;
	dane.open("Wyniki.txt", ios::app);
	if (dane.good() == 1)
	{
		cout << "Zapisywanie" << endl;
		dane.width(10);
		dane.fill('~');
		dane << imie;
		dane.width(10);
		dane.fill('~');
		dane << sila;
		dane.width(10);
		dane.fill('~');
		dane << zycie;
		dane.width(10);
		dane.fill('~');
		dane << reputacja << endl;
	}

	else
		cout << "blad" << endl;

}



void Wiedzmin::pojedynek()
{
	int numer = rand() % 4;
	cout << "wiedzmin " << walka[numer] << endl;

}




ostream & operator << (ostream& wejscie, Wiedzmin element)
{


	wejscie.width(33);
	wejscie.fill('_');
	wejscie << internal << "Imie " << element.imie;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Sila " << element.sila;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Zycie " << element.zycie;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Reputacja " << element.reputacja;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;


	wejscie << endl;
	wejscie.width(35);
	wejscie << internal << "Umiejetnosci";
	wejscie.width(35);
	wejscie.fill('_');
	wejscie << "_" << endl;

	for (int i = 0; i < 4; i++)
	{
		wejscie.width(35);
		wejscie << internal << element.walka[i];
		wejscie.width(35);
		wejscie.fill('_');
		wejscie << "_" << endl;

	}

	return wejscie;

}


//************czarodziejka****************



Czarodziejka::Czarodziejka(string a)
{
	imie = a;
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;

	int x = 4;
	czary = new string[x];
	czary[0] = "rzuca niszczace gradobicie Merigold";
	czary[1] = "rzuca podwojny krzyz Alzura";
	czary[2] = "rzuca piorun Alzura";
	czary[3] = "broni sie tarcza Alzura";

}


Czarodziejka::Czarodziejka()
{
	imie = "Dzesika";
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;

	czary = new string[4];
	czary[0] = "rzuca niszczace gradobicie Merigold";
	czary[1] = "rzuca podwojny krzyz Alzura";
	czary[2] = "rzuca piorun Alzura";
	czary[3] = "broni sie tarcza Alzura";

}


void Czarodziejka::wczytaj()
{
	fstream dane;
	dane.open("Czarodziejka.txt", ios::in);
	if (dane.good() == 1)
	{
		cout << "Odczytywanie" << endl;
		getline(dane, imie);
		string bufor;
		getline(dane, bufor);
		sila = atoi(bufor.c_str());
		getline(dane, bufor);
		zycie = atoi(bufor.c_str());
		getline(dane, bufor);
		reputacja = atoi(bufor.c_str());
		dane.close();

	}
	else
		cout << "blad" << endl;

}

void Czarodziejka::zapis()
{
	fstream dane;
	dane.open("Wyniki.txt", ios::app);
	if (dane.good() == 1)
	{
		cout << "Zapisywanie" << endl;
		dane.width(10);
		dane.fill('~');
		dane << imie;
		dane.width(10);
		dane.fill('~');
		dane << sila; 
		dane.width(10);
		dane.fill('~');
		dane << zycie;
		dane.width(10);
		dane.fill('~');
		dane<< reputacja << endl;
		dane.close();
	}

	else
		cout << "blad" << endl;

}




void Czarodziejka::pojedynek()
{
	int numer = rand() % 4;
	cout << "czarodziejka " << czary[numer] << endl;

}



ostream& operator << (ostream& wejscie, Czarodziejka element)
{


	wejscie.width(33);
	wejscie.fill('_');
	wejscie << internal << "Imie " << element.imie;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Sila " << element.sila;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Zycie " << element.zycie;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Reputacja " << element.reputacja;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;


	wejscie << endl;

	wejscie.width(35);
	wejscie << internal << "Umiejetnosci";
	wejscie.width(35);
	wejscie.fill('_');
	wejscie << "_" << endl;

	for (int i = 0; i < 4; i++)
	{
		wejscie.width(35);
		wejscie << internal << element.czary[i];
		wejscie.width(35);
		wejscie.fill('_');
		wejscie << "_" << endl;

	}
	return wejscie;

}


//**************elf******************

Elf::Elf(string a)
{
	imie = a;
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;

	int x = 4;
	technika = new string[x];
	technika[0] = "rzuca sztyletem";
	technika[1] = "robi unik";
	technika[2] = "strzela z luku";
	technika[3] = "rzuca urok";




}


Elf::Elf()
{
	imie = "Alanek";
	sila = rand() % 101;
	zycie = rand() % 101;
	reputacja = 0;

	technika = new string[4];
	technika[0] = "rzuca sztyletem";
	technika[1] = "robi unik";
	technika[2] = "strzela z luku";
	technika[3] = "rzuca urok";
}


void Elf::wczytaj()
{
	fstream dane;
	dane.open("Elf.txt", ios::in);
	if (dane.good() == 1)
	{
		cout << "Odczytywanie" << endl;
		getline(dane, imie);
		string bufor;
		getline(dane, bufor);
		sila = atoi(bufor.c_str());
		getline(dane, bufor);
		zycie = atoi(bufor.c_str());
		getline(dane, bufor);
		reputacja = atoi(bufor.c_str());
		dane.close();

	}
	else
		cout << "blad" << endl;
	
}

void Elf::zapis()
{
	fstream dane;
	dane.open("Wyniki.txt", ios::app);
	if (dane.good() == 1)
	{
		cout << "Zapisywanie" << endl;
		dane.width(10);
		dane.fill('~');
		dane << imie;
		dane.width(10);
		dane.fill('~');
		dane << sila;
		dane.width(10);
		dane.fill('~');
		dane << zycie;
		dane.width(10);
		dane.fill('~');
		dane << reputacja << endl;
	}

	else
		cout << "blad" << endl;

}



void Elf::pojedynek()
{
	int numer = rand() % 4;
	cout << "elf " << technika[numer] << endl;

}



ostream& operator << (ostream& wejscie, Elf element)
{


	wejscie.width(30);
	wejscie.fill('_');
	wejscie << internal << "Imie " << element.imie;
	wejscie.width(30);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Sila " << element.sila;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Zycie " << element.zycie;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;

	wejscie.width(33);
	wejscie << internal << "Reputacja " << element.reputacja;
	wejscie.width(33);
	wejscie.fill('_');
	wejscie << "_" << endl;


	wejscie << endl;

	wejscie.width(35);
	wejscie << internal << "Umiejetnosci";
	wejscie.width(35);
	wejscie.fill('_');
	wejscie << "_" << endl;

	for (int i = 0; i < 4; i++)
	{
		wejscie.width(35);
		wejscie << internal << element.technika[i];
		wejscie.width(35);
		wejscie.fill('_');
		wejscie << "_" << endl;

	}
	return wejscie;

}






//************ogolne************


template <class Typ1, class Typ2 >
void sedzia(Typ1 A, Typ2 B)
{
	int strata = rand() % 13 + 6;
	

	if (A->sila > B->sila)
	{

		cout.width(35);
		cout.fill('~');
		cout << internal << "Wygral/a " << A->imie;
		cout.width(35);
		cout.fill('~');
		cout << "~" << endl;

		B->zycie -= (2*strata);
		A->zycie -= strata;

		if (B->zycie <= 0)
			cout << "Smierc " << B->imie << endl;
		cout << endl;
		if (A->zycie <= 0)
			cout << "Smierc " << A->imie << endl;
		cout << endl;
		A->reputacja += strata;
	}


	else if (A->sila < B->sila)
	{

		cout.width(35);
		cout.fill('~');
		cout << internal << "Wygral/a " << B->imie;
		cout.width(35);
		cout.fill('~');
		cout << "~" << endl;
		

		A->zycie -=(2* strata);
		B->zycie -= strata;
		if (A->zycie <= 0)
			cout << "Smierc " << A->imie << endl;
		cout << endl;
		if (B->zycie <= 0)
			cout << "Smierc " << B->imie << endl;
		cout << endl;
		B->reputacja += strata;
	}

	else
	{
		cout.width(35);
		cout.fill('~');
		cout << internal << "Remis ";
		cout.width(35);
		cout.fill('~');
		cout << "~" << endl;
		

		A->reputacja += (strata / 2);
		B->reputacja += (strata / 2);
		A->zycie -=  strata;
		B->zycie -=strata;
	}
	cout << A->sila << " sila " << A->imie << endl;
	cout<< B->sila << " sila " << B->imie << endl;

	cout.width(35);
	cout.fill('~');
	cout << internal << "Wygral silniejszy ";
	cout.width(35);
	cout.fill('~');
	cout << "~" << endl;
	
	
	cout << endl;
	cout << A->imie << " ma " << A->zycie << " zycia " << A->reputacja << " reputacji " << endl;
	cout << B->imie << " ma " << B->zycie << " zycia " << B->reputacja << " reputacji " << endl;
	cout << endl;

}



void bitwa(Postac* A, Postac* B)
{
	cout << "Walka " << endl;
	cout << A->sila << " sila " << A->imie << endl;
	cout<< B->sila << " sila " << B->imie << endl;
	cout << A->imie << " ma " << A->zycie << " zycia " << A->reputacja << " reputacji " << endl;
	cout << B->imie << " ma " << B->zycie << " zycia " << B->reputacja << " reputacji " << endl;
	cout << endl;
	cout << "Przygotowanie do walki" << endl;
	cout << "Kliknij aby zaczela sie walka" << endl;
	system("PAUSE");
	system("cls");

	for (int i = 0; i <= 7; i++)
	{
		
		cout << A->imie<< " ";
		A->pojedynek();
		Sleep(2000);
		
		cout << B->imie << " ";
		B->pojedynek();
		
		Sleep(2000);
		
	}
	cout << endl;
	sedzia(A, B);
	cout << endl;

}


void historia()
{
	fstream dane;
	dane.open("Wyniki.txt", ios::in);
	if (dane.good() == 1)
	{
		cout << "Odczytuje dane" << endl;
	cout.width(10);
		cout.fill('-');
		cout<<  "imie";
		cout.width(10);
		cout.fill('-');
		cout << "sila";
		cout.width(10);
		cout.fill('-');
		cout << "zycie";
		cout.width(30);
		cout.fill('-');
		cout << "reputacja" << endl;
		while (!dane.eof())
		{
			string bufor;
			
			getline(dane, bufor);
			cout << bufor << endl;
			

		}
		dane.close();
	}
	else
		cout << "blad" << endl;

}

int obsluga_main()
{


	srand(time(NULL));
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, 0x0003);


	cout.width(35);
	cout.fill('~');
	cout << internal << "Pojedynki";
	cout.width(35);
	cout.fill('~');
	cout << "~" << endl;
	Sleep(2000);
	system("cls");

	//***************opisy ras*****************
	cout << "Do wyboru masz 3 rasy: " << endl << endl << endl;

	cout.width(35);
	cout.fill('~');
	cout << internal << "Wiedzmin";
	cout.width(35);
	cout.fill('~');
	cout << "~" << endl;
	cout << "Wiedzmini wsrod Nordlingow tajemnicza i elitarna kasta kaplanow-wojownikow, prawdopodobnie odlam druidow. Wyposazeni w wyobrazeniu ludowym w moc magiczna oraz nadludzkie zdolnosci, stawiac mieli do walki przeciwko zlym duchom, potworom i wszelkim ciemnym silom. W boju wpadali w trans, wywo³ywany, jak siê mniema, autohipnoza lub srodkami odurzajacymi, walczyli ze slepa energia, bedac calkowicie niewrazliwymi na bol i powazne nawet obrazenia." << endl;
	cout << endl;
	system("PAUSE");
	system("cls");

	cout << "Do wyboru masz 3 rasy: " << endl << endl << endl;
	cout.width(35);
	cout.fill('~');
	cout << internal << "Czarodziejka";
	cout.width(35);
	cout.fill('~');
	cout << "~" << endl;
	cout << "Loza Czarodziejek powstala po przewrocie na Thanedd, aby zastapic Kapitule i Rade Czarodziejow. Jej zalozycielki postawily sobie za cel zakonczenie wojny miedzy Nilfgaardem i Krolestwami Polnocnymi oraz zachowanie wplywu czarodziejow na losy swiata. Organizacja ta dziala do dzis, zrzeszajac najpotezniejsze magiczki z polnocnych i poludniowych krain." << endl;
	system("PAUSE");
	system("cls");

	cout << "Do wyboru masz 3 rasy: " << endl << endl << endl;
	cout.width(35);
	cout.fill('~');
	cout << internal << "Elf";
	cout.width(35);
	cout.fill('~');
	cout << "~" << endl;
	cout << "Elfy to jedna z najstarszych ras, mlodsza tylko od gnomow. Elfy bardzo wczesnie stworzyly wspaniala cywilizacje i dzisiaj na elfich ruinach stoja ludzkie miasta, takie jak Wyzima albo Oxenfurt. Slyna z uzdolnien magicznych, ale elfia magia rozni sie od ludzkiej." << endl;
	system("PAUSE");
	system("cls");


	//************************wybor postaci**********************
	while (1)
	{
		sekcja:
		cout.width(35);
		cout.fill('~');
		cout << internal << "MENU";
		cout.width(35);
		cout.fill('~');
		cout << "~" << endl;

		
		string liczba ;
		cout << "Aby wykonac dana akcje wybierz jej numer " << endl;
		cout << "1 Wybor postaci " << endl;
		cout << "2 Zobacz wyniki " << endl;
		cout << "3 Wyjdz z gry " << endl;

		cin >> liczba;
		int x = strtol(liczba.c_str(),NULL,10);
		
		system("cls");

		try
		{
			if (x == 0)
				throw x;
		}
		
		catch (int)
		{
			cout << "Podales zly numer \nWracamy jedno wzwyz";
			Sleep(2000);
			system("cls");
			goto sekcja;

		}
		
		
		switch (x)
		{
		case 1:
		{
			sekcja1:
			cout << " Wybor postaci" << endl;
			string  postac;
			cout << "Podaj jej numer " << endl;
			cout << "1 Wiedzmin " << endl;
			cout << "2 Czarodziejka " << endl;
			cout << "3 Elf" << endl;
			cin >> postac;
			int a = strtol(postac.c_str(), NULL, 10);
			try
			{
				if (a == 0)
				throw 'a';
			}
			catch (char)
			{
				cout << "Podales zly numer \nWracamy jedno wzwyz";
				Sleep(2000);
				system("cls");
				goto sekcja1;
			}
			system("cls");
			switch (a)
			{ //****************************wiedzmin*************************
			case 1:
			{
				cout << "Wybrano wiedzmina" << endl;
				string b;
				cout << "Podaj jego imie " << endl;
				cin >> b;
				Wiedzmin Sylwia(b);
				cout << Sylwia;
				
				Postac* wsk = NULL;
				wsk = &Sylwia;
				sekcja2:
				string  numer; //*****************wybor przeciwnika***********************
				cout << "Chcesz sie pojedynkowac z: \n  1-wiedzminem \n 2-czarodziejka \n czy 3-elfem? " << endl;
				cin >> numer;
				int c = strtol(numer.c_str(), NULL, 10);
				try
				{
					if (c == 0)
						throw Sylwia;

				}
				catch (Wiedzmin)
				{
					cout << "Wracamy jedno wzwyz";
					Sleep(2000);
					system("cls");
					goto sekcja2;
				}
				switch (c)
				{
				case 1:
				{
					cout << "Wybrales wiedzmina" << endl;
				
					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;

					
					switch (g)
					{
					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Wiedzmin Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;
					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Wiedzmin Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;

					}
					
					default:
					{
						cout << "Wracamy do maina" << endl;
						Sleep(2000);
						break;
					}
					
					} 
					break;
					system("cls");
					}

				case 2:
				{
					cout << "Wybrales czarodziejke" << endl;

					
					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;

					
					switch (g)

					{
					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Czarodziejka Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;
					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Czarodziejka Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;

					}

					}
					break;
				}
				case 3:
				{
					cout << "Wybrales elfa" << endl;

				
					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;

					
					switch(g)
					{ 
					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Elf Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;
					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Elf Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;


					}

					
				
					}

					break;

				}
			
				}

				system("cls");
				break;
			}
			case 2: //***********************czarodziejka*****************************
			{
				cout << "Wybrano czarodziejke" << endl;


				string b;
				cout << "Podaj jej imie " << endl;
				cin >> b;
				Czarodziejka Sylwia(b);
				cout << Sylwia;
				
				Postac* wsk = NULL;
				wsk = &Sylwia;
				int numer; //***************************wybor przeciwnika*****************************8
		
				cout << "Chcesz sie pojedynkowac z: \n  1-wiedzminem \n 2-czarodziejka \n czy 3-elfem? " << endl;
				cin >> numer;

				
				switch (numer)
				{
				case 1:
				{
					cout << "Wybrales wiedzmina" << endl;
					int g;
				
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;

					

					switch (g)
					{
					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Wiedzmin Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;

					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Wiedzmin Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;


					}

					default:
					{
						cout << "Podano zly numer komendy \nWracamy do maina" << endl;
						Sleep(2000);
						break;

					}
					break;
					}
					system("pause");
					break;
				}
				case 2:
				{
					cout << "Wybrales czarodziejke" << endl;


					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;
					switch (g)
					{
					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Czarodziejka Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;

					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Czarodziejka Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;

					}

					default:
					{

						cout << "Podano zly numer komendy \nWracamy do maina" << endl;
						Sleep(2000);
						break;
						system("cls");
					}

					break;
				
					}
					break;
				}
				case 3:
				{
					cout << "Wybrales elfa" << endl;


					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;

					switch (g)
					{


					case 1:
					{
						cout << "Wybrales Mistrza" << endl;
						Elf Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");
						break;

					}
					case 2:
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Elf Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;

						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");
						break;


					}
				

					break;
					}
					system("cls");
					break;
				}

				
				default:
				{
					cout << "Podano zly numer komendy \nWracamy do maina" << endl;
					Sleep(2000);
					break;

				}
				system("cls");
				}




				system("cls");
				break;
			}
			case 3:
			{ //************************************elf**************************************
				cout << "Wybrano elfa" << endl;


				string b;
				cout << "Podaj jego imie " << endl;
				cin >> b;
				Elf Sylwia(b);
				cout << Sylwia;
				
				Postac* wsk = NULL;
				wsk = &Sylwia;
				int numer; //*************wybor przeciwnika********************
				cout << "Chcesz sie pojedynkowac z: \n  1-wiedzminem \n 2-czarodziejka \n czy 3-elfem? " << endl;
				cin >> numer;

				switch (numer)
				{
				case 1:
				{
					cout << "Wybrales wiedzmina" << endl;
					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;
					if (g == 1)
					{
						cout << "Wybrales Mistrza" << endl;
						Wiedzmin Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");

					}
					else if (g == 2)
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Wiedzmin Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");


					}

					break;
				}
				case 2:
				{
					cout << "Wybrales czarodziejke" << endl;


					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;
					if (g == 1)
					{
						cout << "Wybrales Mistrza" << endl;
						Czarodziejka Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");

					}
					else if (g == 2)
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Czarodziejka Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");

					}

					break;
				}
				case 3:
				{
					cout << "Wybrales elfa" << endl;


					int g;
					cout << "Wybierz przeciwnika: \n 1-Mistrz \n 2-losowy przeciwnik" << endl;
					cin >> g;
					if (g == 1)
					{
						cout << "Wybrales Mistrza" << endl;
						Elf Mistrz;
						Mistrz.wczytaj();
						Postac* wsk1 = NULL;
						wsk1 = &Mistrz;
						cout << Mistrz;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Mistrz.zapis();
						system("PAUSE");
						system("cls");

					}
					else if (g == 2)
					{
						cout << "Wybrales losowego przeciwnika" << endl;
						Elf Losowy;
						Postac* wsk1 = NULL;
						wsk1 = &Losowy;
						cout << Losowy;
						
						bitwa(wsk, wsk1);
						Sylwia.zapis();
						Losowy.zapis();
						system("PAUSE");
						system("cls");


					}

					break;

				}

				
				
					}




				system("cls");
				break;
			}

		
			default:
			{
				cout << "Podano zly numer komendy \nWracamy na maina" << endl;
				Sleep(2000);
				break;
			}
			system("cls");
			
			}
			break;
		}

		case 2:
		{
			cout << "Zobacz wyniki " << endl;
			historia();
			system("PAUSE");
			system("cls");
			break;
		}

		case 3:
		{
			cout << " Wyjdz z gry" << endl;
			system("PAUSE");
			return 0;
			break;
		}

		default:
		{
			cout << "Podano zly numer komendy" << endl;
			cout << "Wracamy do maina" << endl;
			Sleep(2000);
			break;
			
		}
		
		}
		system("cls");
	}

}




