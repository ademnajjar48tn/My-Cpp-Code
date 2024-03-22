#include <iostream>

double Factorial(double num)
{
    double result = num;
    for (double i = num - 1.0; i > 0.0; i--)
    {
        result *= i;
    }
    return result;
}
int main()
{
    double number;
    bool on = false;
    std::string Resume;
    std::cout << "************* FACTORIAL-CALC *************\n";
    do{
        std::cout << "Enter a number: ";
        std::cin >> number;
        std::cout << number << "! = " << Factorial(number) << '\n';
        std::cout << "Continue (Yes-No): ";
        std::getline(std::cin >> std::ws, Resume);
        if (Resume == "Yes" || Resume == "yes" || Resume == "y" || Resume == "Y")
        {
            std::cout << "------------------------------------------\n\n";
            on = true;                                              
        }
        else
        {
            std::cout << "******************************************\n";
            on = false;
        }
          
    }while(on);

}
