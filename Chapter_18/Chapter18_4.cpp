// Rozdzial_18_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>



int main()
{
    using std::list;
    using std::cout;
    using std::endl;
    auto outint = [](int n) {
        std::cout << n << " ";
    };

    list<int> yadayada = { 50,100, 90,180,60,210, 415, 88, 188, 201 };
    list<int> etcetera = { 50,100, 90,180,60,210, 415, 88, 188, 201 };
    cout << "Oryginalne listy: \n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    yadayada.remove_if([](int n) {return n > 100; });
    etcetera.remove_if([](int n) {return n > 200; });
    cout << "Przyciete  listy:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
 
}

