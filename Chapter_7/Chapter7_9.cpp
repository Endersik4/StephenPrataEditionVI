// Rozdzial_7_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
    {
        continue;
    }
    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    std::cout << entered;
    for (int i = 0; i < entered; i++)
    {
        std::cout << "======DISPLAY 1 ======\n";
        display1(ptr_stu[i]);
        std::cout << "======DISPLAY 2 ======\n";
        display2(&ptr_stu[i]);
    }
    std::cout << "======DISPLAY 3 ======\n";
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Gotowe\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i != n; i++)
    {
        std::cout << "Podaj nazwisko studenta: ";
        if (i != 0) cin.get();
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == NULL) break;

        std::cout << "Podaj hobby studenta: ";
        cin.getline(pa[i].hobby, SLEN);

        std::cout << "Podaj ooplevel: ";
        cin >> pa[i].ooplevel;
    }
    return i;
}

void display1(student st)
{
    std::cout << "Student nazywa sie " << st.fullname << std::endl;
    std::cout << "Hobby to " << st.hobby << std::endl;
    std::cout << "OOplevel to" << st.ooplevel << std::endl;
}

void display2(const student* ps)
{
    std::cout << "Student nazywa sie " << ps->fullname << std::endl;
    std::cout << "Hobby to " << ps->hobby << std::endl;
    std::cout << "OOplevel to" << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n)
{
    for (int i = 0; i != n; i++)
    {
        std::cout << "Student nazywa sie " << pa[i].fullname << std::endl;
        std::cout << "Hobby to " << pa[i].hobby << std::endl;
        std::cout << "OOplevel to" << pa[i].ooplevel << std::endl;
    }
}
