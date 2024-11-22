#include <iostream>
#include <string>
using namespace std;

// Define a class
class musician 
{
    public: // Access specifier
        string name;
        string band;

        // Declare a method inside the class
        void sing_a_line()
        {
            cout << "Let It Be, Let It Be ..." << endl;
        }

        // Declare a method outside the class
        void greet();
};

void musician::greet()
{
    cout << "Hi, I am Paul" << endl;
}

int main()
{
    // Create object
    musician paul;
    paul.name = "Paul McCartney";
    paul.band = "The Beatles";

    paul.sing_a_line();
    paul.greet();
    
    return 0;
}