/*
============================================================
             MULTILEVEL INHERITANCE
============================================================

THEORY:
Multilevel Inheritance is a type of inheritance in which
a class is derived from another derived class.

In simple words, inheritance occurs in multiple levels.

PATTERN:

        Grandfather
             |
           Father
             |
            Son

Here:
Grandfather = Base Class
Father      = Derived Class
Son         = Derived Class

SYNTAX:

class Father : public Grandfather
{
};

class Son : public Father
{
};

EXAMPLE:
Grandfather -> Father -> Son

OUTPUT:
Grandfather has property
Father has house
Son has bike
============================================================
*/

#include <iostream.h>
#include <conio.h>

class Grandfather
{
public:

    void property()
    {
        cout << "Grandfather has property";
    }
};

class Father : public Grandfather
{
public:

    void house()
    {
        cout << "Father has house";
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

    s.house();

    cout << endl;

    s.bike();

    getch();
}


/*
OUTPUT:

Grandfather has property
Father has house
Son has bike
*/
