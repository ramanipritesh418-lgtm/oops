/*
============================================================
                    CONSTRUCTOR
============================================================

THEORY:
Constructor is a special member function of a class.

It is automatically called when an object is created.

MAIN POINTS:
1. Constructor name is same as class name.
2. Constructor has no return type.
3. Constructor is automatically called when object is created.
4. It is used to initialize an object.

PATTERN:

        Class
          |
      Constructor
          |
     Object Created
          |
   Constructor Called
      Automatically

SYNTAX:

class ClassName
{
public:
    ClassName()
    {
        // statements
    }
};

ClassName object;

EXAMPLE:
Class = Student
Constructor = Student()
Object = s

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Student
{
public:

    Student()
    {
        cout << "Default Constructor is called";
    }
};

void main()
{
    clrscr();

    Student s;

    getch();
}

/*
============================================================
OUTPUT:

Constructor is called

============================================================

HOW IT WORKS:

Student s;

Here, object 's' is created.

As soon as object is created,
Student() constructor is automatically called.

============================================================
*/
