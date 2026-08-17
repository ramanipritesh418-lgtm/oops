#include <iostream>
using namespace std;
class a1
{
    public:
        int a;
        int b;
        void display()
        {
            cout << endl << "value of a=" << a;
        }
};

class b1 : public a1
{
    public:
        void display2()
        {
            b=20;
            cout << endl << "value of b=" << b;
        }
};

int main()
{
    a1 obj1;
    b1 obj2;
    obj1.a=10;
    obj1.display();
    obj2.display2();
}
