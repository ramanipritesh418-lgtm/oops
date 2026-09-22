/*
============================================================
             SINGLE INHERITANCE
============================================================

THEORY:
Single Inheritance is a type of inheritance in which
one child class inherits properties and functions
from one parent class.

PATTERN:

        Father
           |
          Son

Here:
Father = Parent / Base Class
Son    = Child / Derived Class

SYNTAX:

class Child : public Parent
{
    // members
};

EXAMPLE:
Father -> Son

OUTPUT:
Father has property
Son has bike
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

void main()
{
    clrscr();

    Son s;

    s.property();

    cout << endl;

    s.bike();

    getch();
}


/*
OUTPUT:

Father has property
Son has bike
*/
