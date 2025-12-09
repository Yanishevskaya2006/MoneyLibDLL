#include <iostream>
#include "Money.h"

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "Sum = " << Sum(a, b) << std::endl;
    std::cout << "Diff = " << Diff(a, b) << std::endl;
    std::cout << "Max = " << Max(a, b) << std::endl;

    return 0;
}
