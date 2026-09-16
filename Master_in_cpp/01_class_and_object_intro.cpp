#include <iostream>
using namespace std;

// Class = Blueprint / Template
class person
{
    private:
        int run;
        string msg;

    public:

        // Member Function
        void play()
        {
            run = 50;
            cout << "Today I scored " << run << " runs" << endl;
        }

        // Member Function
        void walk()
        {
            msg = "Today I walked 3 kilometers.";
            cout << msg << endl;
        }
};

int main()
{
    // Object creation
    person obj;

    // Calling member functions using object
    obj.play();
    obj.walk();

    return 0;
}


//Output
//Today I scored 50 runs
//Today I walked 3 kilometers.
