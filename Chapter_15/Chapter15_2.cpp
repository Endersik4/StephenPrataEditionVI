// Rozdzial_15_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    double x, y, z;
    cout << "Podaj dwie liczby: ";
    while (cin >> x >> y)
    {
        try {
            z = hmean(x, y);
            cout << "Srednia harmoniczna liczb " << x << " i " << y << " wynosi " << z << endl;
            cout << "Srednia geometrzyczna liczb " << x << " i " << y << " wynosi " << gmean(x, y) << endl;
            cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
        }
        catch (invalid_argument& bg) {
            cout << bg.what() << endl;
            cout << "Sprobouj ponownie\n";
            continue;
        }
        catch (domain_error& bg) {
            cout << bg.what() << endl;
            cout << "Niestety, to koneic zabawy\n";
            break;
        }
    }
    cout << "Koniec";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b) throw invalid_argument("wartosc nie moze byc ujemna");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0) throw domain_error("Obie wartosci nie moga byc ujemne");
    return std::sqrt(a*b);
}
