/*
============================================================
                    POLYMORPHISM
============================================================

THEORY:

Polymorphism is an important concept of Object-Oriented
Programming (OOP).

The word Polymorphism means:

Poly   = Many
Morphism = Forms

Therefore:

Polymorphism means "One Name, Many Forms".

In polymorphism, the same function name can perform
different operations or behave differently.

------------------------------------------------------------
TYPES OF POLYMORPHISM
------------------------------------------------------------

There are two main types of Polymorphism:

1. Compile-time Polymorphism
2. Run-time Polymorphism

------------------------------------------------------------
1. COMPILE-TIME POLYMORPHISM
------------------------------------------------------------

In Compile-time Polymorphism, the compiler decides
which function should be called at compile time.

Function Overloading is an example of
Compile-time Polymorphism.

Example:

add(int, int)
add(int, int, int)

Both functions have the same name but different
parameters.

------------------------------------------------------------
2. RUN-TIME POLYMORPHISM
------------------------------------------------------------

In Run-time Polymorphism, the function to be executed
is decided at run time.

Function Overriding is an example of
Run-time Polymorphism.

------------------------------------------------------------
FUNCTION OVERLOADING
------------------------------------------------------------

Function Overloading is a feature of C++ in which
multiple functions have the same name but different
parameters.

RULE:

Same Function Name
        +
Different Parameters
        =
Function Overloading

Parameters can be different in:

1. Number of parameters
2. Data type of parameters
3. Order of parameters

Example:

add(int, int)
add(int, int, int)

IMPORTANT:

Only changing the return type does NOT create
Function Overloading.

Example:

int add(int, int)
float add(int, int)

This is NOT valid Function Overloading.

------------------------------------------------------------
SYNTAX:
------------------------------------------------------------

class ClassName
{
public:

    void function(int a, int b)
    {
    }

    void function(int a, int b, int c)
    {
    }
};

------------------------------------------------------------
EXAMPLE:
------------------------------------------------------------

Calculator class contains two add() functions:

add(int, int)
add(int, int, int)

Both have the same name but different parameters.

Therefore, this is Function Overloading.

Function Overloading
        ↓
Compile-time Polymorphism
============================================================
*/

#include <iostream.h>
#include <conio.h>

class Calculator
{
public:

    // Function with 2 parameters
    void add(int a, int b)
    {
        cout << "Sum of two numbers = " << a + b;
    }

    // Function with 3 parameters
    void add(int a, int b, int c)
    {
        cout << "Sum of three numbers = " << a + b + c;
    }
};

void main()
{
    clrscr();

    Calculator c;

    // Calls add() with 2 parameters
    c.add(10, 20);

    cout << endl;

    // Calls add() with 3 parameters
    c.add(10, 20, 30);

    getch();
}


/*
============================================================
                         OUTPUT
============================================================

Sum of two numbers = 30
Sum of three numbers = 60

============================================================

HOW IT WORKS:

c.add(10, 20);
        ↓
2 parameters
        ↓
First add() function is called
        ↓
10 + 20 = 30


c.add(10, 20, 30);
        ↓
3 parameters
        ↓
Second add() function is called
        ↓
10 + 20 + 30 = 60

------------------------------------------------------------

FINAL POINT:

Same function name
        +
Different parameters
        ↓
Function Overloading
        ↓
Compile-time Polymorphism

============================================================
*/
