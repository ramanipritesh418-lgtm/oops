/*
============================================================
                OPERATOR OVERLOADING
============================================================

THEORY:
Operator Overloading is a feature of C++ in which an
operator is given a special meaning for user-defined
objects.

In simple words:
Operator + Normal Work + Object Work

Example:
Normal:
10 + 20 = 30

With Objects:
n1 + n2 = 30

Here, + operator is overloaded.

MAIN POINTS:
1. Operator Overloading gives a new meaning to an operator.
2. It is used with user-defined objects.
3. The 'operator' keyword is used.
4. It improves readability of the program.

PATTERN:

       n1 + n2
          |
      operator+()
          |
       Result

SYNTAX:

class ClassName
{
public:
    ClassName operator+(ClassName obj)
    {
        // operation
    }
};

============================================================
*/

#include <iostream.h>
#include <conio.h>

class Number
{
    int value;

public:

    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        Number temp(0);

        temp.value = value + n.value;

        return temp;
    }

    void display()
    {
        cout << "Sum = " << value;
    }
};

void main()
{
    clrscr();

    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    n3.display();

    getch();
}

/*
============================================================
OUTPUT:

Sum = 30

============================================================

HOW IT WORKS:

1. Number n1(10);
   -> n1 contains 10.

2. Number n2(20);
   -> n2 contains 20.

3. Number n3 = n1 + n2;
   -> + operator is overloaded.

4. n1 + n2 internally calls:
   n1.operator+(n2)

5. value + n.value
   = 10 + 20
   = 30

6. Result is stored in n3.

7. n3.display();
   -> displays Sum = 30.

IMPORTANT:

operator+()
      ↓
Overloads + operator

n1 + n2
      ↓
n1.operator+(n2)

============================================================
*/
