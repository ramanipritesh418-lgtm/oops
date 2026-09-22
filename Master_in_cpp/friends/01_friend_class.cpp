/*
============================================================
                    FRIEND CLASS
============================================================

THEORY:
A Friend Class is a class which is allowed to access
the private and protected members of another class.

Normally, private members cannot be accessed outside
the class.

But by using the 'friend' keyword, we can give another
class permission to access private members.

MAIN POINTS:
1. Friend class is declared using the 'friend' keyword.
2. Friend class can access private members.
3. Friend class can access protected members.
4. Friendship is given by the class whose private data
   is being accessed.

PATTERN:

        Class X
          |
     private data
          |
      friend class
          ↓
        Class Y
          |
     Access private data

SYNTAX:

class X
{
    int a;

    friend class Y;
};

class Y
{
    // Can access X's private members
};

============================================================
*/

#include <iostream.h>
#include <conio.h>

class X
{
private:

    int a;

public:

    X()
    {
        a = 5;
    }

    friend class Y;
};

class Y
{
public:

    void show(X obj)
    {
        cout << "Value of a = " << obj.a;
    }
};

void main()
{
    clrscr();

    X x;
    Y y;

    y.show(x);

    getch();
}

/*
============================================================
OUTPUT:

Value of a = 5

============================================================

HOW IT WORKS:

In Class X:

int a;

'a' is a private member.

Normally Class Y cannot access 'a'.

But Class X declares:

friend class Y;

Therefore, Class Y gets permission to access
Class X's private member.

In main():

X x;
Y y;

Here:
x = Object of Class X
y = Object of Class Y

Then:

y.show(x);

Y's show() function receives X object 'x'.

Inside show():

obj.a

accesses the private member 'a'.

Therefore output is:

Value of a = 5

============================================================

IMPORTANT:
friend class Y;

means:

Class Y can access the private members of Class X.

============================================================
*/
