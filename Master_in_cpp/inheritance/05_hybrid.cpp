/*
============================================================
             HYBRID INHERITANCE
============================================================

THEORY:
Hybrid Inheritance is a combination of two or more
types of inheritance in a single program.

In this example:

Grandfather
     |
   Father
   /    \
 Son   Daughter

Here:

1. Grandfather -> Father -> Son
   = Multilevel Inheritance

2. Father -> Son and Father -> Daughter
   = Hierarchical Inheritance

Therefore, this is Hybrid Inheritance.

PATTERN:

              Grandfather
                   |
                 Father
                /      \
              Son    Daughter

SYNTAX:

class Father : public Grandfather
{
};

class Son : public Father
{
};

class Daughter : public Father
{
};

EXAMPLE:
Grandfather -> Father -> Son
Father -> Daughter

OUTPUT:
Grandfather has property
Father has house
Son has bike
Grandfather has property
Father has house
Daughter has car
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
    s.house();
    s.bike();
    d.property();
    d.house();
    d.car();
  
    getch();
}


/*
OUTPUT:

Grandfather has property
Father has house
Son has bike

Grandfather has property
Father has house
Daughter has car
*/
