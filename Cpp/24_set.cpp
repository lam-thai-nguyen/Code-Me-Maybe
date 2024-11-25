/*A set stores unique elements where they:
    - Are sorted automatically in ascending order.
    - Are unique, meaning equal or duplicate values are ignored.
    - Can be added or removed, but the value of an existing element cannot be changed.
    - Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    // Declare, elements are sorted alphabetically or numerically
    set<string> names = {"John", "Paul", "George", "Ringo"};

    for (string member : names)
    {
        cout << member << endl;
    }

    // Add elements using .insert()
    names.insert("Billy");

    // Remove using .erase() or .clear()

    // .size(), .empty() ...
    
    return 0;
}