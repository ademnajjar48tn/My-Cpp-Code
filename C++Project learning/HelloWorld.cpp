#include <iostream>

class Animal
{
    public:
        bool alive = true;
    void Eat()
    {
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal
{

};
int main()
{
    Dog dog1;
    dog1.Eat();
}