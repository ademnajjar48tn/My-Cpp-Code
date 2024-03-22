#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "************ TEMPERATURE-CONVERTION ************\n";
    std::cout << "F = Farenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Choose A Unit (F, C): ";
    std::cin >> unit;
    switch (unit){
        case 'F':
            std::cout << "Enter the value of the temperature in Celsius to procced with the convertion: ";
            std::cin >> temp;
            temp = (temp * 1.8) + 32;
            std::cout << "Temperature in Farenheit = " << temp << "F\n";
            break;
        case 'f':
            std::cout << "Enter the value of the temperature in Celsius to procced with the convertion: ";
            std::cin >> temp;
            temp = (temp * 1.8) + 32;
            std::cout << "Temperature in Farenheit = " << temp << "F\n";
            break;
        case 'C':
            std::cout << "Enter the value of the temperature in Farenheit to procced with the convertion: ";
            std::cin >> temp;
            temp = (temp - 32) * 5/9;
            std::cout << "Temperature in Celsius = " << temp << "C\n";
            break;
        case 'c':
            std::cout << "Enter the value of the temperature in Farenheit to procced with the convertion: ";
            std::cin >> temp;
            temp = (temp - 32) * 5/9;
            std::cout << "Temperature in Celsius = " << temp << "C\n";
            break;
        default:
            std::cout << "Invalid Unit!" << '\n';
    }
    
    std::cout << "*******************END-PROGRAM*******************";


}