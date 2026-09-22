/*
============================================================
                    DESTRUCTOR
============================================================

THEORY:
Destructor is a special member function of a class.

It is automatically called when an object is destroyed.

MAIN POINTS:
1. Destructor name is same as class name.
2. Destructor starts with tilde (~) symbol.
3. Destructor has no return type.
4. Destructor does not take parameters.
5. It is automatically called when an object is destroyed.

PATTERN:

        Object Created
             ↓
        Constructor
             ↓
        Object Works
             ↓
        Object Destroyed
             ↓
         Destructor

SYNTAX:

class ClassName
{
public:
    ~ClassName()
    {
        // statements
    }
};

EXAMPLE:

Car()  → Constructor
~Car() → Destructor

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Car
{
public:

    Car()
    {
        cout << "Constructor called";
    }

    ~Car()
    {
        cout << endl;
        cout << "Destructor called";
    }
};

void main()
{
    clrscr();

    Car c;

    cout << endl;
    cout << "Car object is working";

    getch();
}

/*
============================================================
OUTPUT:

Constructor called
Car object is working
Destructor called

============================================================

HOW IT WORKS:

Car c;

Object 'c' is created.
Therefore Constructor is automatically called.

When the object is destroyed,
Destructor is automatically called.

============================================================

IMPORTANT:

Constructor → Object Create

Destructor → Object Destroy

Destructor symbol = ~

Example:

~Car()

============================================================
*/
