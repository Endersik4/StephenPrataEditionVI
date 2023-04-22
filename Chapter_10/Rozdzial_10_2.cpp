// Rozdzial_10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Person {
    private:
        static const int LIMIT = 256;
        std::string lname;
        char fname[LIMIT];
    public:
        Person() { lname = ""; fname[0] = '\0'; }
        Person(const std::string& ln, const char* fn = "HejTy")
        {
            lname = ln;
            strcpy_s(fname, fn);
        }

        void Show() const
        {
            std::cout << "Imie: " << fname << std::endl;
            std::cout << "Nazwisko: " << lname << std::endl;
        }
        void FormalShow() const {
            std::cout << "Nazwisko: " << lname << std::endl;
            std::cout << "Imie: " << fname << std::endl;
        }
};

int main()
{
    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    one.Show();
    std::cout << std::endl;
    one.FormalShow();
    std::cout << std::endl;

    two.Show();
    std::cout << std::endl;
    two.FormalShow();
    std::cout << std::endl;

    three.Show();
    std::cout << std::endl;
    three.FormalShow();
    std::cout << std::endl;
}
