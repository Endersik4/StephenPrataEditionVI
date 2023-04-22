// Rozdzial_5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double stan_d = 100.0, stan_c = 100.0;
    double zysk_d = 0, zysk_c, zysk_c_2;
    int rok = 1;
    
    while ((zysk_d + 100) >= stan_c)
    {
        //Dafne
        zysk_d += 0.1 * stan_d;
        //Cleo
        zysk_c = 0.05 * stan_c; //100 - akutalny stan
        stan_c += zysk_c;
       // std::cout << "ZYSK DAFNE: " << zysk_d+100 << std::endl;
       // std::cout << "ZYSK CLEO: " << stan_c << std::endl;
       // std::cout << "ROK: " << rok << std::endl;
        rok++;
    }
    std::cout << "Zyski Cleo przekrocza zyski Dafne po " << rok << " latach i wtedy Zyski Cleo beda wynosily " << stan_c - 100 << "zl a zyski Dafne " << zysk_d <<"zl" << std::endl;
}

