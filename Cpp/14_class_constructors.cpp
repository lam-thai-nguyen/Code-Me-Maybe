#include <iostream>
#include <string>
using namespace std;

class musician
{
    private: 
        // It is considered good practice to declare your class attributes as private (as often as you can)
        // Note: By default, all members of a class are private if you don't specify an access specifier
        string name;
        string band;

    public:
        // A constructor is called when the class is called
        musician(string name, string band)
        {
            this->name = name;
            this->band = band;
            cout << "Hi, I am " << name << ". I am from " << band << endl;
        }
};

int main()
{
    musician john("John Lennon", "The Beatles"); // class is called
    
    return 0;
}