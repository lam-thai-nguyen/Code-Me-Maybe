#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    // A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.

    // Declare
    deque<string> names = {"Paul", "George"};

    // Loop through
    for (string member : names)
    {
        cout << member << endl;
    }

    // Accessing: [] or .front() or .bacK() or .at()

    // Add deque elements: .push_front() or .push_back()
    names.push_front("John");
    names.push_back("Ringo");

    // Remove: pop_front() or pop_back()

    // Loop through: for-each loop
    
    
    return 0;
}