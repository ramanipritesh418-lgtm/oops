#include <iostream>
using namespace std;

class HOD
{
    public:
        void Permission()
        {
            cout << "Trip Permission" << endl;
        }
};

class Faculty : public HOD
{
    public:
        void WrittenApp()
        {
            cout << "Written application given by students to the faculty" << endl;
        }
};

class Student : public Faculty
{
    public:
        void Proposal()
        {
            cout << "Proposal for the trip" << endl;
        }
};

int main()
{
    Student stdobj1;

    stdobj1.Proposal();
    stdobj1.WrittenApp();
    stdobj1.Permission();
}


// Proposal for the trip
// Written application given by students to the faculty
// Trip Permission