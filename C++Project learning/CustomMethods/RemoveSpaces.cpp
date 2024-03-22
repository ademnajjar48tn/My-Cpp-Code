#include <iostream>

void RemoveSpaces(std::string &var)
{
    for (int i = 0;i<var.length(); i++)
    {
        int SpaceIndex = var.find(' ');
        if (SpaceIndex != std::string::npos)
        {
            var.erase(SpaceIndex, 1);
        }
        else {
            break;
        }
    }
}