/*
============================================================
             PARAMETERIZED CONSTRUCTOR
============================================================

THEORY:
A Parameterized Constructor is a constructor which
accepts one or more parameters.

It is used to initialize the data members of an object
with values at the time of object creation.

MAIN POINTS:
1. Constructor name is same as class name.
2. Constructor has no return type.
3. It accepts parameters.
4. It is automatically called when object is created.
5. Values are passed while creating the object.

PATTERN:

        Car
         |
   Car(int p)
         |
    Car c(500000)

SYNTAX:

class ClassName
{
public:
    ClassName(int x)
    {
        // statements
    }
};

ClassName object(value);

EXAMPLE:
Car = Class
Car(int p) = Constructor
c = Object
500000 = Parameter Value

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Car
{
    int price;

public:

    Car(int p)
    {
        price = p;
    }

    void display()
    {
        cout << "Car Price = " << price;
    }
};

void main()
{
    clrscr();

    Car c(500000);

    c.display();

    getch();
}

/*
============================================================
OUTPUT:

Car Price = 500000

============================================================

HOW IT WORKS:

Car c(500000);

500000 is passed to the constructor.

p = 500000
price = p

Therefore:
price = 500000

============================================================
*/
