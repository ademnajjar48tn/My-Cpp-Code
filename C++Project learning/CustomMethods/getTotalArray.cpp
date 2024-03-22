#include <iostream>

double getTotal(double prices[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}