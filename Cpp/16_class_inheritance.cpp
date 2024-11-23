#include <iostream>
#include <string>
using namespace std;

// There are 2 inheritance concepts: derived class (child) and base class (parent)

// Base class
class person
{
    public:
        string name;
        int dob;
        void greet()
        {
            cout << "Hi, I am " << name << endl;
        }
};

// Derived class
class musician: public person
{
    public:
        string band;
};

int main()
{
    musician john;
    john.name = "John Lennon";
    john.greet();
    
    return 0;
}