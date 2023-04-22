// Rozdzial_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "tv.h"
using namespace std;

int main() 
{
	Tv s42;
	cout << "Poczatkowe ustawienia telewizora 42\":\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nNowe ustawienia telewizora 42\":\n";
	s42.settings();

	Remote grey;

	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	grey.pokaz_tryb();
	s42.zmien_tryb(grey);
	grey.pokaz_tryb();
	cout << "\nUStawienia telewziora 42\" pouzyciu pilota:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58, 28);
	cout << "\nUstawienia telewziora 58\"\n";
	s58.settings();
	return 0;
}