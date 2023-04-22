// Rozdzial_10_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move& m) const;
    void reset(double a = 0, double b = 0);
};

int main()
{
    using namespace std;
    double x_2, y_2;

    Move a(5, 10), b(0, 0);
    cout << "Wspolrzedne dla punktu A: \n";
    a.showmove();

    cout << "Ustaw wspolrzedne X i Y dla punktu B: " << endl;
    cin >> x_2 >> y_2;
    b.reset(x_2, y_2);
    cout << "Wspolrzedne dla punktu B: \n";
    b.showmove();

    cout << "Sumowanie wspolrzednych punktow A i B.\n ";
    auto c = a.add(b);
    cout << "Wspolrzedne dla punktu C:\n";
    c.showmove();
}

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    using namespace std;
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}

Move Move::add(const Move& m) const
{
    double suma_x = 0.0;
    double suma_y = 0.0;
    suma_x = this->x + m.x;
    suma_y = this->y + m.y;

    return Move(suma_x, suma_y);
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
