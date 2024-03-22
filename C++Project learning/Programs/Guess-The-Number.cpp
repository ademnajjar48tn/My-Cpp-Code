#include <iostream>
int main()
{
    int num;
    int guess = 0;
    int tries = 0;
    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******************** GUESS-THE-NUMBER ********************\n";

    do{
        std::cout << "Enter a Guess bettween 1 and 100: ";
        std::cin >> guess;
        tries++;
        if (guess > num)
        {
            std::cout << "Hint💡 The number is smaller!\n";
        }
        else if (guess < num)
        {
            std::cout << "Hint💡 The number is bigger!\n";
        }
        else
        {
            std::cout << "You won🏆 in " << tries <<" tries" << '\n';
        }
    }while(guess != num);

    std::cout << "**********************************************************";
}