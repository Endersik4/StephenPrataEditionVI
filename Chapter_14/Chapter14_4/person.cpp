#include "person.h"
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;
void Person::Ustaw()
{
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
}

//Person
void Person::Show() const
{
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
}


//Gunslinger
void Gunslinger::Show() const
{
	Person::Show();
	cout << "Czas potrzebny do wyciagniecia rewolwera: "<<czas_wyciagniecia_rew<<endl;
	cout << "Liczba naciec na rewolwerze: " << naciecia_rewolwera << endl;
}

void Gunslinger::Ustaw()
{
	Person::Ustaw();
	cout << "Podaj liczbe naciec w rewolwerze: ";
	cin >> naciecia_rewolwera;
	cout << "Podaj czas potrzebny do wyciagniecia rewolweru: ";
	cin >> czas_wyciagniecia_rew;
}


//Card
Card::Card() {
	srand(time(NULL));
	nr_karty = rand() % 52 + 1;
	kolor = kolory[rand() % 4];
}

//PokerPlayer
void PokerPlayer::Ustaw()
{
	Person::Ustaw();
}

void PokerPlayer::Show() const
{
	Person::Show();
	cout << karta << endl;
}

//BadDue
void BadDude::Show() const
{
	Gunslinger::Show();
	PokerPlayer::Show();
}

void BadDude::Ustaw()
{
	Gunslinger::Ustaw();
}
