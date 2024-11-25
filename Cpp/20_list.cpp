#include <iostream>
#include <list>
#include <string>
using namespace std;

// A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
// Two differences are:
// (1) You can remove and add from both ends of a list
// (2) You cannot access a list at a specified position

int main()
{
    // Declare
    list<string> names = {"John", "Paul", "George", "Ringo"};

    // Accessing from front or back is allowed (similar to changing a list element)

    // Adding from front or back using .push_front() and .push_back()

    // Removing from front or back using .pop_front() and .pop_back()

    // List size: .size()

    // is Empty: empty()

    // Loop through a list
    for (string member : names)
    {
        cout << member << endl;
    }
    
    return 0;
}