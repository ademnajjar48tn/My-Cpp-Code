#include <iostream>

int main()
{
    int rows, columns;
    char symbol;
    std::cout << "************ CREATE-RECTANGLE ************\n";
    std::cout << "# of Rows: ";
    std::cin >> rows;
    std::cout << "# of Columns: ";
    std::cin >> columns;
    std::cout << "Symbol($, #, &, @, ...): ";
    std::cin >> symbol;
    for(int r = 0; r < rows; r++)
    {
        for(int c = 0; c < columns; c++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    std::cout << "******************************************";
}