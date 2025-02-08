/******************************************************************************/
/*!
\file   fibanacci.cpp
\author Harrison Parrish
\par   email: harrison.parrish@digipen.edu
\brief code prints fibanacci sequence with correct formatting

*/
/******************************************************************************/
/******************************************************************************/
#include <iostream>
#include <iomanip>

void fibonacci(int max) {
    std::cout << "           Fibonacci        Fibonacci" << std::endl;
    std::cout << " N           number          quotient" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << " 0             0                  N/A" << std::endl;
    std::cout << " 1             1                  N/A" << std::endl;

    int fib1 = 0;
    int fib2 = 1;
    for (int i = 2; i <= max; i++) {
        int next = fib1 + fib2;
        double quotient = (double)next / fib2;

        std::cout << std::setw(2) << i
            << std::setw(14) << next
            << std::setw(21) << std::fixed
            << std::setprecision(16) << quotient
            << std::endl;

        fib1 = fib2;
        fib2 = next;
    }
}