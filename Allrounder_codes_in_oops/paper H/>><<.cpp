// Q. 1. Create a class and overload >> and << operator. (20)


#include <iostream.h>
#include <conio.h>

class Student
{
    int rollno;
    int marks;

public:
    // Overload >> operator for input
    friend istream& operator>>(istream &in, Student &s)
    {
        cout << "Enter Roll Number: ";
        in >> s.rollno;

        cout << "Enter Marks: ";
        in >> s.marks;

        return in;
    }

    // Overload << operator for output
    friend ostream& operator<<(ostream &out, Student &s)
    {
        out << "\nRoll Number: " << s.rollno;
        out << "\nMarks: " << s.marks;

        return out;
    }
};

void main()
{
    clrscr();

    Student s;

    cin >> s;
    cout << s;

    getch();
}
