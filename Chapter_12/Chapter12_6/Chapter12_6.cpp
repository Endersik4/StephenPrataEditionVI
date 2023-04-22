// Rozdzial_12_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "queue.h"
#include <cstdlib>
#include <ctime>

const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main()
{
    using std::cout;
    using std::cin;
    using std::ios_base;
    using std::endl;
    srand(time(0));
    cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymalna dlugosc kolejki: ";
    int qs;
    cin >> qs;
    Queue line(qs);
    Queue line2(qs);

    cout << "Podaj symulowany czas (w godzinach): ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    double perhour = 0.0;
    double min_per_cust = 0.0;
    min_per_cust = MIN_PER_HR / perhour;
    bool kolejka = false;

    int i = 60;
    do {
        perhour = i--;
        Queue line(hours * perhour);
        Queue line2(hours * perhour);
        min_per_cust = MIN_PER_HR / perhour;
        turnaways = 0;
        customers = 0;
        served = 0;
        sum_line = 0;
        wait_time = 0;
        line_wait = 0;
        kolejka = false; //false - linia 1, true - linia 2; 

        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))
            {
                if (line.isfull() && line2.isfull() && (double)line_wait / served > 1.0)
                {
                    turnaways++;
                }
                else if (line.isfull() && (double)line_wait / served > 1.0)
                {
                    customers++;
                    temp.set(cycle);
                    line2.enqueue(temp);
                    kolejka = true;
                }
                else
                {
                    if (line.queuecount() > line2.queuecount())
                    {
                        customers++;
                        temp.set(cycle);
                        line2.enqueue(temp);
                        kolejka = true;
                    }
                    else
                    {
                        customers++;
                        temp.set(cycle);
                        line.enqueue(temp);
                        kolejka = false;
                    }
                }
            }
            if (wait_time <= 0)
            {
                if (!line.isempty())
                {
                    if (!line2.isempty())
                    {
                        if (line.queuecount() > line2.queuecount())
                        {
                            line2.dequeue(temp);
                            kolejka = true;
                        }
                        else
                        {
                            line.dequeue(temp);
                            kolejka = false;
                        }
                    }
                    else { line.dequeue(temp); kolejka = false; }
                }
                else { line2.dequeue(temp); kolejka = true;}
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;

            }
            if (wait_time > 0) wait_time--;
            if (kolejka == true) sum_line += line2.queuecount();
            else sum_line += line.queuecount();
        }
        line.~Queue();
    } while ((double)line_wait / served > 1.0);
    i++;
    if (customers > 0)
    {

        cout << " liczba klientow przyjetych: " << customers << endl;
        cout << "liczba klientow obsluzonych: " << served << endl;
        cout << "Liczba klientow odeslanych: " << turnaways << endl;
        cout << "Srednia dlugosc kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.setf(ios_base::showpoint);
        cout << (double)sum_line / cyclelimit << endl;
        cout << "Srednia liczba klientow na godzine: " << i << endl;
        cout << "Sredni czas oczekiwania: " << (double)line_wait / served << " minut\n";
    }
    else cout << "Brak klientow!\n";

    cout << "Gotowe!\n";

    return 0;
}

bool newcustomer(double x)
{
    return (rand() * x / RAND_MAX < 1);
}
