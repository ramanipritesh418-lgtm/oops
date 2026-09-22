/*
============================================================
             HIERARCHICAL INHERITANCE
============================================================

THEORY:
Hierarchical Inheritance is a type of inheritance in which
multiple child classes inherit properties and functions
from one parent class.

PATTERN:

              Father
             /      \
           Son    Daughter

Here:
Father   = Parent / Base Class
Son      = Child / Derived Class
Daughter = Child / Derived Class

SYNTAX:

class Son : public Father
{
};

class Daughter : public Father
{
};

EXAMPLE:
Father -> Son
Father -> Daughter

OUTPUT:
Father has property
Son has bike
Father has property
Daughter has car
============================================================
*/

#include <iostream.h>
#include <conio.h>

class Father
{
public:

    void property()
    {
        cout << "Father has property";
    }
};

class Son : public Father
{
public:

    void bike()
    {
        cout << "Son has bike";
    }
};

class Daughter : public Father
{
public:

    void car()
    {
        cout << "Daughter has car";
    }
};

void main()
{
    clrscr();

    Son s;
    Daughter d;

    s.property();

    cout << endl;

    s.bike();

    cout << endl;

    d.property();

    cout << endl;

    d.car();

    getch();
}


/*
OUTPUT:

Father has property
Son has bike
Father has property
Daughter has car
*/
