#include <iostream>

int main()
{
    srand(time(NULL));
    int random1 = (rand() % 6) + 1;
    int random2 = (rand() % 6) + 1;
    int random3 = (rand() % 6) + 1;
    std::cout << "Dice #1: " << random1 << '\n';
    std::cout << "Dice #2: " << random2 << '\n';
    std::cout << "Dice #3: " << random3 << '\n';
}