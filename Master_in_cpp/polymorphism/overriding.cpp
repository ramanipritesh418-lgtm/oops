/*
============================================================
                FUNCTION OVERRIDING
============================================================

THEORY:

Function Overriding occurs when a derived class provides
its own implementation of a function that is already
defined in the base class.

In Function Overriding:

1. There must be a Parent/Base class.
2. There must be a Child/Derived class.
3. Both classes have the same function name.
4. Both functions have the same parameters.
5. Child class provides its own implementation.

PATTERN:

              Father
                |
               Son

Father -> show()
Son    -> show()

The Son's show() overrides Father's show().

------------------------------------------------------------
RULE:
------------------------------------------------------------

Same Function Name
        +
Same Parameters
        +
Parent + Child
        ↓
Function Overriding

------------------------------------------------------------
POLYMORPHISM:
------------------------------------------------------------

Function Overriding is related to
Run-time Polymorphism.

------------------------------------------------------------
SYNTAX:
------------------------------------------------------------

class Parent
{
public:

    void show()
    {
    }
};

class Child : public Parent
{
public:

    void show()
    {
    }
};

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Father
{
public:

    void show()
    {
        cout << "Father has property";
    }
};

class Son : public Father
{
public:

    void show()
    {
        cout << "Son has bike";
    }
};

void main()
{
    clrscr();

    Son s;

    s.show();

    getch();
}


/*
============================================================
                         OUTPUT
============================================================

Son has bike

============================================================

HOW IT WORKS:

Father class has:

show()
    ↓
Father has property

Son class also has:

show()
    ↓
Son has bike

Both functions have:

Same name
Same parameters
Parent + Child

Therefore:

Son's show() overrides Father's show().

When:

s.show();

is called, Son's show() is executed.

============================================================

FINAL POINT:

Function Overriding
        ↓
Same Function Name
        +
Same Parameters
        +
Parent + Child
        ↓
Run-time Polymorphism

============================================================
*/
