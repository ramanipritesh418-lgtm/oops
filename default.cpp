#include <iostream>
using namespace std;

class Animal
{
    public:
        int a;

        Animal()
        {
            a = 20;
        }

        void eat()
        {
            cout << "value of a:" << a;
        }
};

int main()
{
    Animal a;
    a.eat();
}

// value of a:20