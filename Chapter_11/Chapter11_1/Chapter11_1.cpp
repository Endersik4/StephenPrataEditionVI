// Rozdzial_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include <fstream>

int main()
{
    using namespace std;

    ofstream plik("plik.txt");

    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if (!(cin >> dstep))
            break;
        plik << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            plik<<steps<<": "<<result<<endl;
            steps++;
        }
        plik << "Po " << steps << " krokach delikwent osiagnal polozenie: \n";
        plik << result << endl;

        cout << "Po " << steps << " krokach delikwent osiagnal polozenie: \n";
        cout << result << endl;
        result.polar_mode();
        cout << " czyli\n" << result << endl;
        cout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;

        plik << " czyli\n" << result << endl;
        plik << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);




        cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    }
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
