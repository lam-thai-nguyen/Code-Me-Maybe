#include <iostream>
#include <string>
using namespace std;

class musician
{
    string name;
    string band;

    public:
        musician (string name, string band)
        {
            this->name = name;
            this->band = band;
        }

        // Encapsulation
        string return_name()
        {
            return name;
        }

        // Encapsulation
        string return_band()
        {
            return band;
        }
};

int main()
{
    musician john("John Lennon", "The Beatles");

    // john.name will raise an error because attribute is private
    cout << john.return_name() << endl;
    cout << john.return_band() << endl;
    
    return 0;
}