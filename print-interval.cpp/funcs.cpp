#include "funcs.h"
#include <iostream>

void print_interval(int L,int U){
        std::cout << "L: " << L << std::endl;
        std::cout << "U: " << U << std::endl;
        for (int n = L; n < U; n++) {
            std::cout << n << " ";
        }
} 

