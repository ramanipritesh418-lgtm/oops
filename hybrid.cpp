#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Eating..." << endl;
        }
};

class Pet : public Animal
{
    public:
        void play()
        {
            cout << "Playing..." << endl;
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "Barking..." << endl;
        }
};

class Puppy : public Dog, public Pet
{
    public:
        void sleep()
        {
            cout << "Sleeping..." << endl;
        }
};

int main()
{
    Puppy mypuppy;

    mypuppy.Dog::eat();
    mypuppy.bark();
    mypuppy.play();
    mypuppy.sleep();
}

// Eating...
// Barking...
// Playing...
// Sleeping...