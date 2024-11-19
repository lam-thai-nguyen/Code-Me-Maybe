#include <iostream>
#include <string>
using namespace std;

// Named struct -> New data type
struct musician
{
    int age;
    string name;
    string band;
};

int main()
{
    // Structures (structs) are a way to group related variables into one place. Each variable is a member of the struct.
    // Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

    // Create a struct variable
    struct
    {
        int age;
        string name;
    } paul, john; // 2 variables with 2 members as age and name

    paul.age = 82;
    paul.name = "Paul McCartney";
    john.age = 40;
    john.name = "John Lennon";

    cout << "Age: " << paul.age << "\tName: " << paul.name << endl;
    cout << "Age: " << john.age << "\tName: " << john.name << endl;

    // Named struct
    musician george;
    george.age = 2001 - 1943;
    george.name = "George Harrison";
    george.band = "The Beatles";

    cout << "Age: " << george.age << "\tName: " << george.name << "\tBand: " << george.band << endl;

    return 0;
}