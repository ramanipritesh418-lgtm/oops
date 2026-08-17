#include <iostream>
using namespace std;

class Calculator
{
    public:
        int sum;

        void add(int a, int b)
        {
            sum = a + b;
            cout << "sum 1: " << sum;
        }

        void add(int a, int b, int c)
        {
            sum = a + b + c;
            cout << endl << "sum 2: " << sum;
        }
};

int main()
{
    Calculator calc;

    calc.add(10,20);
    calc.add(10,20,30);
}


// sum 1: 30
// sum 2: 60