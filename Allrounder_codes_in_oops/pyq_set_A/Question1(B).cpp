/*
============================================================
Q.1(B) Write a program to find factorial of given number
       using recursion. (10)
============================================================

CONCEPT:
Recursion means a function calls itself.

Example:
5! = 5 × 4 × 3 × 2 × 1
   = 120

Base Condition:
if(n == 0)
    return 1;

Recursive Call:
return n * factorial(n - 1);
============================================================
*/

#include <iostream.h>
#include <conio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void main()
{
    clrscr();

    int n, result;

    cout << "Enter a number: ";
    cin >> n;

    result = factorial(n);

    cout << "Factorial = " << result;

    getch();
}

/*
============================================================
OUTPUT:
============================================================

Enter a number: 5
Factorial = 120

EXPLANATION:
1. factorial() is a recursive function.
2. The function calls itself using factorial(n - 1).
3. if(n == 0) is the base condition.
4. return 1 stops the recursion.
5. return n * factorial(n - 1) is the recursive call.
6. For n = 5:

   factorial(5)
   = 5 × factorial(4)
   = 5 × 4 × factorial(3)
   = 5 × 4 × 3 × factorial(2)
   = 5 × 4 × 3 × 2 × factorial(1)
   = 5 × 4 × 3 × 2 × 1

   Therefore, Factorial = 120.

============================================================
*/
