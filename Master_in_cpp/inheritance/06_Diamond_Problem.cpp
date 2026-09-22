/*
============================================================
                DIAMOND PROBLEM
============================================================

THEORY:

Diamond Problem occurs in Multiple Inheritance when
a derived class inherits the same base class through
two different paths.

PATTERN:

             Grandfather
             /         \
        Father          Uncle
             \         /
                Son

Here:
Grandfather = Base Class
Father      = Derived Class
Uncle       = Derived Class
Son         = Final Derived Class

The Son gets Grandfather's property through two paths:

Grandfather -> Father -> Son
Grandfather -> Uncle  -> Son

Therefore, compiler gets confused about which
property() function should be called.

This is called AMBIGUITY.

DIAMOND PROBLEM = Ambiguity in Multiple Inheritance
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

class Uncle : public Grandfather
{
public:

    void car()
    {
        cout << "Uncle has car";
    }
};

class Son : public Father, public Uncle
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

    /*
    These functions are not ambiguous because
    they belong to different classes.
    */

    s.house();

    cout << endl;

    s.car();

    cout << endl;

    s.bike();

    cout << endl;

    /*
    This function is ambiguous:

    s.property();

    Why?

    Son gets property() through two paths:

    Son -> Father -> Grandfather -> property()

    Son -> Uncle -> Grandfather -> property()

    Therefore compiler gets confused.
    */

    getch();
}


/*
============================================================
OUTPUT:

Father has house
Uncle has car
Son has bike

============================================================

PROBLEM:

If we write:

s.property();

Compiler gets confused between:

Father -> Grandfather -> property()

and

Uncle -> Grandfather -> property()

So it gives:

ERROR: Ambiguous

This is called DIAMOND PROBLEM.

============================================================
*/
