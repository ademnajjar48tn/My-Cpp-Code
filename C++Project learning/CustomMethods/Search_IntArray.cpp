#include <iostream>

int SearchIntArray(int array[], int array_size, int element)
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