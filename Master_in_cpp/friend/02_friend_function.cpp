/*
============================================================
                    FRIEND FUNCTION
============================================================

THEORY:
A Friend Function is a function which is not a member
of a class but it can access the private and protected
members of the class.

The 'friend' keyword is used to give permission to
the function.

REAL-LIFE EXAMPLE:
Pritesh = Person
secret  = Private Secret
showSecret() = Friend Function

Normally:
showSecret() cannot access private secret.

But:
friend void showSecret(Pritesh p);

Now showSecret() can access the private secret.

MAIN POINTS:
1. Friend function is not a member of the class.
2. It is declared using the 'friend' keyword.
3. It can access private members.
4. It can access protected members.
5. It is called like a normal function.

PATTERN:

        Pritesh Class
             |
       private secret
             |
      friend function
             ↓
       showSecret()
             |
       Access secret

SYNTAX:

class ClassName
{
private:
    int data;

public:
    friend void functionName(ClassName object);
};

void functionName(ClassName object)
{
    cout << object.data;
}

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Pritesh
{
private:
    int secret;

public:
    Pritesh()
    {
        secret = 100;
    }

    friend void showSecret(Pritesh p);
};

void showSecret(Pritesh p)
{
    cout << "My secret = " << p.secret;
}

void main()
{
    clrscr();

    Pritesh p;

    showSecret(p);

    getch();
}

/*
============================================================
OUTPUT:

My secret = 100

============================================================

HOW IT WORKS:

1. Pritesh is a class.

2. secret is a private data member.

3. Pritesh() constructor sets:
   secret = 100;

4. friend void showSecret(Pritesh p);
   gives permission to showSecret() to access
   Pritesh's private members.

5. Pritesh p;
   creates an object of Pritesh.

6. showSecret(p);
   calls the friend function.

7. p.secret accesses the private member because
   showSecret() is declared as a friend.

IMPORTANT:

Friend Function:
Class -> Permission -> One Function

friend void showSecret(Pritesh p);

Friend Class:
Class -> Permission -> Entire Class

friend class Friend;

============================================================
*/
