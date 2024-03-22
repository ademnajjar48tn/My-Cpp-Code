#include <iostream>

int SearchStringArray(std::string array[], int array_size, std::string element)
{
    for (int i = 0; i < array_size; i++)
    {
        if (array[i]==element)
        {
            return i;
        }
    }
    return -1;
}