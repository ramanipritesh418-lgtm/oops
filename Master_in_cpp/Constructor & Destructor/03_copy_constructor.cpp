/*
============================================================
                 COPY CONSTRUCTOR
============================================================

THEORY:
A Copy Constructor is a special constructor which is used
to initialize a new object by copying the values of
an existing object.

In simple words:

One Object
    ↓
Copy Constructor
    ↓
Another Object

MAIN POINTS:
1. Copy Constructor is used to copy one object's data
   into another object.
2. It takes a reference of an object of the same class.
3. It has no return type.
4. It is automatically called when a new object is
   initialized from an existing object.

PATTERN:

        c1
        |
   Copy Constructor
        |
        c2

c1 = Original Object
c2 = Copy Object

SYNTAX:

class ClassName
{
public:
    ClassName(ClassName &object)
    {
        // copy data
    }
};

ClassName c1(value);
ClassName c2(c1);

EXAMPLE:
Car c1(5000);
Car c2(c1);

Here:
c1 = Original Object
c2 = Copy Object

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

    Car(Car &c)
    {
        price = c.price;
    }

    void display()
    {
        cout << "Car Price = " << price;
    }
};

void main()
{
    clrscr();
    Car c1(5000);
    Car c2(c1);
    c2.display();
    getch();
}

/*
============================================================
OUTPUT:

Car Price = 5000

============================================================

HOW IT WORKS:

Car c1(5000);

Here:
c1 = Original Object
price = 5000

Then:

Car c2(c1);

Copy Constructor is called.

The value of c1.price is copied into c2.price.

Therefore:

c1.price = 5000
c2.price = 5000

============================================================

IMPORTANT:
Copy Constructor = One Object -> Another Object

Syntax:
ClassName(ClassName &object)

============================================================
*/
