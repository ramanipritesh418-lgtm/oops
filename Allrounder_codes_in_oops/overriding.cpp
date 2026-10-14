// Program to demonstrate Function Overriding
#include <iostream.h>
#include <conio.h>

class Father
{
public:
    void display()
    {
        cout << "\nThis is Father class.";
    }
};

class Son : public Father
{
public:
    void display()
    {
        cout << "\nThis is Son class.";
    }
};

void main()
{
    clrscr();

    Son s;
    s.display();

    getch();
}







/*#include <iostream.h>
#include <conio.h>

class Father
{
public:
    void display()
    {
        cout << "\nThis is Father class.";
    }
};

class Son : public Father
{
public:
    void display()
    {
        cout << "\nThis is Son class.";
    }
};

void main()
{
    clrscr();

    Father f;   
    Son s;

    cout << "Function Overriding Demonstration";

    f.display();
    s.display();

    getch();
}*/


// 🖥️ Output
// Function Overriding Demonstration
// This is Father class.
// This is Son class.






