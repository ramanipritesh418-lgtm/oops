/*
============================================================
             MULTIPLE INHERITANCE
============================================================

THEORY:
Multiple Inheritance is a type of inheritance in which
one child class inherits properties and functions from
more than one parent class.

PATTERN:

        Father       Mother
           \           /
            \         /
              Son

Here:
Father = Parent / Base Class
Mother = Parent / Base Class
Son    = Child / Derived Class

SYNTAX:

class Child : public Parent1, public Parent2
{
};

EXAMPLE:
Father + Mother -> Son

OUTPUT:
Father has property
Mother gives love
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

class Mother
{
public:

    void love()
    {
        cout << "Mother gives love";
    }
};

class Son : public Father, public Mother
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

    s.love();

    cout << endl;

    s.bike();

    getch();
}


/*
OUTPUT:

Father has property
Mother gives love
Son has bike
*/
