/*
A map stores elements in "key/value" pairs.

Elements in a map are:
    - Accessible by keys (not index), and each key is unique.
    - Automatically sorted in ascending order by their keys.
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    // Declare using this format: map<keytype, valuetype> mapName
    map<string, int> names = { {"John", 1940}, {"Paul", 1942} };

    // Accessing
    cout << "John was born in " << names["John"] << endl;
    cout << "Paul was born in " << names.at("Paul") << endl;

    // Change value: similar to others

    // Add element using [] or .insert()
    names["George"] = 1943;
    cout << "George was born in " << names.at("George") << endl;

    // Remove using .erase(key) or clear()

    // .size(), .empty()

    // Loop through using auto keyword
    for (auto member : names)
    {
        cout << member.first << " was born in " << member.second << endl;
    }
    
    return 0;
}