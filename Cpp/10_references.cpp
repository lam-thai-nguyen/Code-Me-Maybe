#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Memory address using &
    string name = "Paul McCartney";
    cout << &name << endl;
    
    // Create references
    // FYI: ref doesn't take spaces and can't be null. ref is just an alias (other name) for the existing variable
    string &ref = name;
    cout << ref << endl;
    cout << &ref << endl; // ref has the same address as the original
    
    // A ref is a variable name that points to the same address, so changes are applied to both names.
    name = "John Lennon";
    cout << name << "\t" << ref << endl;

    ref = "George Harrison";
    cout << name << "\t" << ref << endl;
    
    return 0;
}