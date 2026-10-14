// Question: Create two classes, namely Class1 and Class2, which contain integer data members. 
// Input values in both classes and swap the values of both objects using a friend function.
// 💻 Complete Turbo C++ Code


#include <iostream.h>
#include <conio.h>

class Class2;

class Class1
{
    int a;

public:
    void getData()
    {
        cout << "Enter value for Class1: ";
        cin >> a;
    }

    void display()
    {
        cout << "\nClass1 value = " << a;
    }

    friend void swap(Class1 &, Class2 &);
};

class Class2
{
    int b;

public:
    void getData()
    {
        cout << "Enter value for Class2: ";
        cin >> b;
    }

    void display()
    {
        cout << "\nClass2 value = " << b;
    }

    friend void swap(Class1 &, Class2 &);
};

// Friend function to swap values
void swap(Class1 &x, Class2 &y)
{
    int temp;

    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

void main()
{
    clrscr();

    Class1 c1;
    Class2 c2;

    c1.getData();
    c2.getData();

    cout << "\nBefore Swapping:";
    c1.display();
    c2.display();

    swap(c1, c2);

    cout << "\n\nAfter Swapping:";
    c1.display();
    c2.display();

    getch();
}


// 🖥️ Expected Output
// Enter value for Class1: 10
// Enter value for Class2: 20

// Before Swapping:
// Class1 value = 10
// Class2 value = 20

// After Swapping:
// Class1 value = 20
// Class2 value = 10
