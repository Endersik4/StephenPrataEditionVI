// Rozdzial_11_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    int n; //proby
    double srednia = 0.0;
    double min_v = 0.0; //minimalna Vector
    double max_v = 0.0; //Maksymalna Vector

    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    cin >> target;
    cout << "Podaj dlugosc kroku: ";
    cin >> dstep;
    cout << "Podaj ilosc prob: ";
    cin >> n;

    for (int i = 0; i != n; i++)
    {
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }

        cout << "Po " << steps << " krokach delikwent osiagnal polozenie: \n";
        cout << result << endl;
        result.polar_mode();
        cout << " czyli\n" << result << endl;
        cout << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;

        srednia += steps;
        if (i > 0)
        {
            if (min_v > steps) min_v = steps;
            if (max_v < steps) max_v = steps;
        }
        else
        {
            min_v = steps;
            max_v = steps;
        }

        steps = 0;
        result.reset(0.0, 0.0);

    }
    srednia /= n;
    cout << "Dystans byl: " << target << endl;
    cout << "Dlugosc kroku: " << dstep << endl;
    cout << "Ilosc prob: " << n << endl;
    cout << "-----------------------" << endl;
    cout << "Srednia wyniosla " << srednia << endl;
    cout << "Minimalna wyniosla " << min_v << endl;
    cout << "Maksymalna wyniosla " << max_v << endl;
    cout << "Koniec!\n";
    return 0;
}
