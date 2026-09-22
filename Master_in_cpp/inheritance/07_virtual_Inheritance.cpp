/*
============================================================
              VIRTUAL INHERITANCE
============================================================

THEORY:

Virtual Inheritance is used to solve the Diamond Problem
in Multiple Inheritance.

It ensures that only ONE shared copy of the common
base class is inherited by the final derived class.

DIAMOND PROBLEM:

              Grandfather
              /         \
          Father        Uncle
              \         /
                 Son

WITHOUT VIRTUAL INHERITANCE:

Son gets Grandfather through two paths:

Son -> Father -> Grandfather
Son -> Uncle  -> Grandfather

Therefore, property() becomes ambiguous.

WITH VIRTUAL INHERITANCE:

Only ONE shared copy of Grandfather is created.

Son can access property() without ambiguity.

SYNTAX:

class Father : virtual public Grandfather
{
};

class Uncle : virtual public Grandfather
{
};

IMPORTANT:

The keyword "virtual" is used while inheriting
the common base class.

Virtual Inheritance = Solution of Diamond Problem
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

class Father : virtual public Grandfather
{
public:

    void house()
    {
        cout << "Father has house";
    }
};

class Uncle : virtual public Grandfather
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
    s.property();
    s.house();
    s.car();
    s.bike();
    getch();
}


/*
============================================================
OUTPUT:

Grandfather has property
Father has house
Uncle has car
Son has bike

============================================================

RESULT:

There is NO ambiguity in:

s.property();

because virtual inheritance provides only ONE
shared copy of Grandfather.

Therefore, Diamond Problem is solved.

============================================================
*/
