#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include "kalfun.hpp"
using namespace std;
float x, y;
int l;
int d;
int* p;
float w[7];
string decyzja, wybor;
string test;
int main()
{
	do
	{


		cout << "Wybierz dzialanie" << endl;
		cout << "1.Dodawanie" << endl;
		cout << "2.Odejmowanie" << endl;
		cout << "3.Mnozenie" << endl;
		cout << "4.Dzielenie" << endl;
		cout << "5.Potegowanie" << endl;
		cout << "6.Pierwiastkowanie" << endl;
		cout << "7.Silnia" << endl;
		cout << ": ";
		cin >> d;
		switch (d)
		{
		case 1:
		{
			if (wybor == "tak")
			{
				cout << "Podaj liczbe dodawana; ";
				cin >> y;
				zapisf(w, d, dodawanie(w[*p - 1], y));
			}
			else
			{
				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj liczbe dodawana; ";
				cin >> y;
				zapisf(w, d, dodawanie(x, y));
			}
			cout << w[d - 1];
			break; }
		case 2:
		{
			if (wybor == "tak")
			{
				cout << "Podaj liczbe odejmowana; ";
				cin >> y;
				zapisf(w, d, odejmowanie(w[*p - 1], y));
			}
			else
			{
				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj liczbe odejmowana; ";
				cin >> y;
				zapisf(w, d, odejmowanie(x, y));
			}

			cout << w[d - 1];
			break; }
		case 3:
		{
			if (wybor == "tak")
			{
				cout << "Podaj ile razy mnozysz; ";
				cin >> y;
				zapisf(w, d, mnozenie(w[*p - 1], y));
			}
			else
			{
				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj ile razy mnozysz; ";
				cin >> y;
				zapisf(w, d, mnozenie(x, y));
			}
			cout << w[d - 1];
			break; }
		case 4:
		{
			if (wybor == "tak")
			{
				cout << "Podaj przez jaka liczbe dzielisz; ";
				cin >> y;
				zapisf(w, d, dzielenie(w[*p - 1], y));
			}
			else
			{
				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj przez jaka liczbe dzielisz; ";
				cin >> y;
				zapisf(w, d, dzielenie(x, y));
			}
			cout << w[d - 1];
			break; }
		case 5:
		{
			if (wybor == "tak")
			{



				cout << "Podaj ile razy potegujesz; ";
				cin >> y;
				zapisf(w, d, potegowanie(w[*p - 1], y));
			}
			else {
				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj ile razy potegujesz; ";
				cin >> y;
				zapisf(w, d, potegowanie(x, y));
			}
			cout << w[d - 1];
			break; }
		case 6:
		{
			if (wybor == "tak")
			{



				cout << "Podaj stopien pierwiastka; ";
				cin >> y;
				zapisf(w, d, pierwiastkowanie(w[*p - 1], y));
			}
			else
			{

				cout << "Wprowadz liczbe : ";
				cin >> x;
				cout << "Podaj stopien pierwiastka; ";
				cin >> y;
				zapisf(w, d, pierwiastkowanie(x, y));
			}
			cout << w[d - 1];
			break; }
		case 7:
		{
			if (wybor == "tak")
				zapisi(w, d, silnia(w[*p - 1]));
			else
			{


				cout << "wprowadz liczbe : ";
				cin >> l;
				zapisi(w, d, silnia(l));
			}
			cout << w[d - 1];
			break;

		}
		}
		p = &d;
		cout << endl;
		cout << "Czy chcesz kontynuowac? Wpisz 'tak' lub 'nie' : ";
		cin >> decyzja;
		if (decyzja == "nie")
		{
			cout << "Dziekuje za skorzystanie z naszego programu";
			system("PAUSE");
			return 0;
		}
		cout << endl;
		cout << "Czy chcesz operowac dalej na otrzymanym wyniku czy zresetowac kalkulator? Wpisz 'tak' lub 'nie' : ";
		cin >> wybor;


	} while (decyzja == "tak");
	cout << "Dziekuje za skorzystanie z naszego programu" << endl;
	system("PAUSE");
	return 0;
}
