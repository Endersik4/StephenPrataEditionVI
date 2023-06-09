// Rozdzial_16_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <queue>

const int MIN_PER_HR = 60;
bool newcustomer(double x);

class Customer {
private:
	long arrive;
	int processtime;
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	cout << "Studium przypadku: bankomat Banku Stu Kas\n";
	cout << "Podaj maksymalna dlugosc kolejki: ";
	int qs;
	cin >> qs;
	//Queue line(qs);
	std::queue<Item> line;


	cout << "Podaj symulowany czas (w godzinach): ";
	int hours;
	cin >> hours;

	long cyclelimit = MIN_PER_HR * hours;

	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.size() >= qs)
				turnaways++;
			else {
				customers++;
				temp.set(cycle);
				line.push(temp);
			}
		}
		if (wait_time <= 0 && !line.empty())
		{

			line.pop();
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.size();
	}

	if (customers > 0)
	{
		cout << " liczba klientow przyjetych: " << customers << endl;
		cout << " liczba klientow obsluzonych: " << served << endl;
		cout << " liczba klientow odeslanych: " << turnaways << endl;
		cout << " srednia dlugosc kolejki: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " sredni czas oczekiwania: "
			<< (double)line_wait / served << " minut\n";
	}
	else
		cout << "Brak klientow!\n";

	cout << "Gotowe!\n";

	return 0;
}

bool newcustomer(double x) {
	return (std::rand() * x / RAND_MAX < 1);
}

void Customer::set(long when) {
	processtime = std::rand() % 3 + 1;
	arrive = when;
}