#include <iostream> 
using namespace std; 
 
//Base class 1 
class Flyer 
{ 
    public: 
        void Fly() 
        { 
            cout << "Flying in the sky:" << endl; 
        } 
}; 
 
//Base class 2 
class Swimmer 
{ 
    public: 
        void swim() 
        { 
            cout << "swimming in the water" << endl; 
        } 
}; 
 
//Derived class inheriting from both flyer & swimmer 
 
class Duck : public Flyer, public Swimmer 
{ 
     
}; 
 
int main() 
{ 
    Duck duckobj1; 
    duckobj1.Fly(); 
    duckobj1.swim(); 
}


// Flying in the sky:
// swimming in the water