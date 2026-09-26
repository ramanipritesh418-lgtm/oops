/*
============================================================
Q.1(A) Write a program to implement Multiple Inheritance. (10)
============================================================

CONCEPT:
Multiple Inheritance means one derived class inherits
properties/functions from two or more base classes.

Example:
Father + Mother → Son

Father Property → House
Mother Property → Gold
Son Property    → Bike
============================================================
*/

#include <iostream.h>
#include <conio.h>

class Father
{
public:
    void fatherProperty()
    {
        cout << "Father Property : House" << endl;
    }
};

class Mother
{
public:
    void motherProperty()
    {
        cout << "Mother Property : Gold" << endl;
    }
};

class Son : public Father, public Mother
{
public:
    void sonProperty()
    {
        cout << "Son Property : Bike" << endl;
    }
};

void main()
{
    clrscr();

    Son s;

    s.fatherProperty();
    s.motherProperty();
    s.sonProperty();

    getch();
}

/*
============================================================
OUTPUT:
============================================================

Father Property : House
Mother Property : Gold
Son Property : Bike

EXPLANATION:
1. Father and Mother are two base classes.
2. Son is the derived class.
3. Son inherits from both Father and Mother.
4. Father has House property.
5. Mother has Gold property.
6. Son has Bike property.
7. This line implements Multiple Inheritance:

   class Son : public Father, public Mother

Therefore, one derived class inherits from two base
classes. Hence, it is called Multiple Inheritance.
============================================================
*/
