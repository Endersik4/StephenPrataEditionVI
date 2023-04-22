// Rozdzial_16_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

int main()
{
    const int n = 10000000;
    vector<int> vi0(n);
    for (long i = 0; i != 10000000; i++)
    {
        vi0.push_back(rand() % 1000);
    }
    vector<int> vi(vi0);
    list<int> li(n);
    copy(vi0.begin(), vi0.end(), back_inserter(li));

    {
        clock_t start = clock();
        sort(vi.begin(), vi.end());
        clock_t end = clock();
        cout << "Czas Sortowanie Vectora: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
    }
    {
        clock_t start2 = clock();
        li.sort();
        clock_t end2 = clock();
        cout << "Czas Sortowanie Listu: " << (double)(end2 - start2) / CLOCKS_PER_SEC << endl;
    }
    li.assign(vi0.begin(), vi0.end());
    {
        
        clock_t start3 = clock();
        copy(li.begin(), li.end(), back_inserter(vi));
        sort(vi.begin(), vi.end());
        li.assign(vi.begin(), vi.end());
        clock_t end3 = clock();
        cout << "Czas skopiowania listu do vectora, posortowaniu go i zwroceniu posortowanych elementow to listu: " << (double)(end3 - start3) / CLOCKS_PER_SEC << endl;
    }
}

