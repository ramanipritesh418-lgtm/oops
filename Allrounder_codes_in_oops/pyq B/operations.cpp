// Question: Write a menu-driven program to implement single inheritance and multiple inheritance.


// Program: Single and Multiple Inheritance

#include <iostream.h>
#include <conio.h>

// Single Inheritance
class Father
{
public:
    void showFather()
    {
        cout << "\nFather class function";
    }
};

class Son : public Father
{
public:
    void showSon()
    {
        cout << "\nSon class function";
    }
};

// Multiple Inheritance
class Mother
{
public:
    void showMother()
    {
        cout << "\nMother class function";
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "\nChild class function";
    }
};

void main()
{
    int choice;

    clrscr();

    while (1)
    {
        cout << "\n\n--- INHERITANCE MENU ---";
        cout << "\n1. Single Inheritance";
        cout << "\n2. Multiple Inheritance";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                Son s;

                cout << "\n\nSingle Inheritance:";
                s.showFather();
                s.showSon();
                break;
            }

            case 2:
            {
                Child c;

                cout << "\n\nMultiple Inheritance:";
                c.showFather();
                c.showMother();
                c.showChild();
                break;
            }

            case 3:
                return;

            default:
                cout << "\nInvalid Choice";
        }
    }

    getch();
}
