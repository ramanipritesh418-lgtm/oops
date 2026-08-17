#include <iostream>
using namespace std;

class A
{
    public:
        void showA()
        {
            cout << "Class A" << endl;
        }
};

class B : public A
{
    public:
        void showB()
        {
            cout << "Class B" << endl;
        }
};

class C : public A
{
    public:
        void showC()
        {
            cout << "Class C" << endl;
        }
};

int main()
{
    B b;
    cout << "calling from B:" << endl;
    b.showB();
    b.showA();

    C c;
    cout << "calling from C:" << endl;
    c.showC();
    c.showA();
}


// calling from B:
// Class B
// Class A
// calling from C:
// Class C
// Class A