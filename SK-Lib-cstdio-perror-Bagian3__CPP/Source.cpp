#pragma warning(disable:4996)

#include <cmath>
#include <cerrno>
#include <cstdio>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    double not_a_number = std::log(-1.0);
    
    if (errno == EDOM) {
        std::perror("log(-1) failed");
    }
    
    std::printf("%f\n", not_a_number);

    _getch();
    return 0;
}