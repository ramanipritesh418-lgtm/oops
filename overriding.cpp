#include <iostream>
using namespace std;

class Animal
{
    public:
        void makeSound()
        {
            cout << "Generic animal sound:" << endl;
        }
};

class Dog : public Animal
{
    public:
        void makeSound()
        {
            cout << "Woof! Woof!" << endl;
        }
};

int main()
{
    Animal a;
    a.makeSound();

    Dog d;
    d.makeSound();
}


// Generic animal sound:
// Woof! Woof!