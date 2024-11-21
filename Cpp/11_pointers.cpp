#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Create a pointer
    string name = "John Lennon";
    string* ptr = &name;

    // Dereferencing
    cout << *ptr << endl;
    
    return 0;
}