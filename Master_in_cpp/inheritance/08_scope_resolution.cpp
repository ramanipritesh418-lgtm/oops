/*
============================================================
        DIAMOND PROBLEM USING SCOPE RESOLUTION OPERATOR
============================================================

THEORY:

In Diamond Problem, the final derived class gets the
same base class through two different paths.

PATTERN:

             Grandfather
             /         \
        Father          Uncle
             \         /
                Son

The problem occurs when Son tries to access
Grandfather's property().

The compiler gets confused because there are two paths:

Son -> Father -> Grandfather
Son -> Uncle  -> Grandfather

This creates AMBIGUITY.

We can solve this ambiguity by using the
SCOPE RESOLUTION OPERATOR (::).

SYNTAX:

object.ClassName::function();

Example:

s.Father::property();
s.Uncle::property();

Here, :: tells the compiler exactly which path
we want to use.

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

    s.house();

    cout << endl;

    s.car();

    cout << endl;

    s.bike();

    cout << endl;

    /*
    s.property();

    This gives AMBIGUOUS ERROR.

    So we specify the path using :: operator.
    */

    s.Father::property();

    cout << endl;

    s.Uncle::property();

    getch();
}


/*
============================================================
OUTPUT:

Father has house
Uncle has car
Son has bike
Grandfather has property
Grandfather has property

============================================================

IMPORTANT:

s.property();
        ↓
Ambiguous ❌

s.Father::property();
        ↓
Father path selected ✅

s.Uncle::property();
        ↓
Uncle path selected ✅

Therefore, the Scope Resolution Operator (::)
can be used to resolve the ambiguity by
specifying the required path.

============================================================
*/
