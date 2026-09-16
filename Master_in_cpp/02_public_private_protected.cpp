#include <iostream>
using namespace std;

class Student
{
private:
    int private_marks = 10;

protected:
    int protected_marks = 20;

public:
    int public_marks = 30;

    void display()
    {
        cout << "Private: " << private_marks << endl;
        cout << "Protected: " << protected_marks << endl;
        cout << "Public: " << public_marks << endl;
    }
};

class Result : public Student
{
public:
    void show()
    {
        // cout << private_marks; // Not accessible
        cout << "Protected in derived class: " << protected_marks << endl;
        cout << "Public in derived class: " << public_marks << endl;
    }
};

int main()
{
    Student s;
    s.display();

    Result r;
    r.show();

    cout << "Public outside class: " << r.public_marks << endl;

    return 0;
}
