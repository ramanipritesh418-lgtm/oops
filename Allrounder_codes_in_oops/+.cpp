// 📘 OOPS Practical: Overload + Operator Using Friend Function
// Question 10: Write a program to overload + operator using a friend function.
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

    void display()
    {
        cout << "\na = " << a;
        cout << "\nb = " << b;
    }

    // Friend function declaration
    friend Number operator+(Number, Number);
};

// Overload + using friend function
Number operator+(Number n1, Number n2)
{
    Number temp;

    temp.a = n1.a + n2.a;
    temp.b = n1.b + n2.b;

    return temp;
}

void main()
{
    clrscr();

    Number n1, n2, n3;

    cout << "Enter first object values:\n";
    n1.getData();

    cout << "\nEnter second object values:\n";
    n2.getData();

    n3 = n1 + n2;

    cout << "\nAddition Result:";
    n3.display();

    getch();
}


// 🖥️ Expected Output
// Enter first object values:
// Enter two numbers: 10 20

// Enter second object values:
// Enter two numbers: 5 6

// Addition Result:
// a = 15
// b = 26
