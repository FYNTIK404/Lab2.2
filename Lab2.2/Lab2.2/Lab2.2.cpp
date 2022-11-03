// Lab2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float c1, c2, c3, c4;
    std::cout << "Input A =";
    float a;
    std::cin >> a;
    std::cout << "Input B =";
    float b;
    std::cin >> b;
    c1 = a + b;
    c2 = a - b;
    c3 = a * b;
    c4 = a / b;
    std::cout << "Sum A + B = " << c1 << std::endl;
    std::cout << "Difference A - B = " << c2 << std::endl;
    std::cout << "Product A * B = " << c3 << std::endl;
    std::cout << "Quotient A / B = " << c4 << std::endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
