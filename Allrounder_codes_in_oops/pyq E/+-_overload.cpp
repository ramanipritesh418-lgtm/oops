// 📘 OOPS Practical: Unary Minus and Binary Plus Operator Overloading
// Question: Write a program to overload unary minus (-) and binary plus (+) operator using member function.
// 💻 Complete Turbo C++ Code
#include <iostream.h>
#include <conio.h>

class Number
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // Overload unary minus (-)
    void operator-()
    {
        a = -a;
        b = -b;
    }

    // Overload binary plus (+)
    Number operator+(Number n)
    {
        Number temp;

        temp.a = a + n.a;
        temp.b = b + n.b;

        return temp;
    }

    void display()
    {
        cout << "\na = " << a;
        cout << "\nb = " << b;
    }
};

void main()
{
    clrscr();

    Number n1, n2, n3;

    cout << "Enter first object values:\n";
    n1.getData();

    cout << "\nEnter second object values:\n";
    n2.getData();

    -n1;

    cout << "\nAfter Unary Minus:";
    n1.display();

    n3 = n1 + n2;

    cout << "\n\nAfter Binary Plus:";
    n3.display();

    getch();
}


// 🖥️ Expected Output
// Enter first object values:
// Enter two numbers: 10 20

// Enter second object values:
// Enter two numbers: 5 6

// After Unary Minus:
// a = -10
// b = -20

// After Binary Plus:
// a = -5
// b = -14
