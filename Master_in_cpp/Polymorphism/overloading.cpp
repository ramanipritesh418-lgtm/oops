#include <iostream.h>
#include <conio.h>

class Calculator
{
public:

    void add(int a, int b)
    {
        cout << "Sum = " << a + b;
    }

    void add(int a, int b, int c)
    {
        cout << "Sum = " << a + b + c;
    }
};

void main()
{
    clrscr();
    Calculator c;
    c.add(10, 20);
    cout << endl;
    c.add(10, 20, 30);
    getch();
}
