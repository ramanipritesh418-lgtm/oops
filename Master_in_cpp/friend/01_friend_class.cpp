/*
============================================================
                    FRIEND CLASS
============================================================

THEORY:
A Friend Class is a class which is allowed to access
the private and protected members of another class.

Normally, private members cannot be accessed outside
the class.

But using the 'friend' keyword, one class can give
permission to another class to access its private
members.

REAL-LIFE EXAMPLE:

Pritesh = Person
Friend  = Pritesh's Friend
secret  = Private Secret

Normally:
Friend cannot access Pritesh's private secret.

But Pritesh gives permission:

friend class Friend;

Now Friend can access Pritesh's private secret.

MAIN POINTS:
1. Friend class is declared using the 'friend' keyword.
2. Friend class can access private members.
3. Friend class can access protected members.
4. Friendship is given by the class whose private data
   is being accessed.

PATTERN:

        Pritesh
           |
      private secret
           |
     friend class
           ↓
         Friend
           |
      Access secret

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

class Pritesh
{
private:

    int secret;

public:

    Pritesh()
    {
        secret = 100;
    }

    friend class Friend;
};

class Friend
{
public:

    void show(Pritesh p)
    {
        cout << "My friend's secret = " << p.secret;
    }
};

void main()
{
    clrscr();

    Pritesh p;
    Friend f;

    f.show(p);

    getch();
}

/*
============================================================
OUTPUT:

My friend's secret = 100

============================================================

HOW IT WORKS:

1. Pritesh is a class.

2. 'secret' is a private data member.

3. Pritesh() is a constructor.
   It sets:
   secret = 100;

4. The statement:

   friend class Friend;

   gives Friend class permission to access
   Pritesh's private members.

5. In main():

   Pritesh p;
   Friend f;

   p = Object of Pritesh
   f = Object of Friend

6. Then:

   f.show(p);

   calls the show() function of Friend class.

7. The show() function receives Pritesh object 'p'.

8. Inside show():

   p.secret

   accesses the private secret of Pritesh.

9. Because Friend is declared as a friend class,
   it is allowed to access the private member.

Therefore:

Output = My friend's secret = 100

============================================================

IMPORTANT:

friend class Friend;

means:

Friend class can access the private members
of Pritesh class.

============================================================
*/
