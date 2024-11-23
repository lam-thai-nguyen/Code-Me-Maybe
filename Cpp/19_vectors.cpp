#include <iostream>
#include <vector>
#include <string>
using namespace std;

// A vector in C++ is like a resizable array.

int main()
{
    // Declare
    vector<string> names = {"John", "Paul", "George", "Ringo"};

    // Access
    cout << names[0] << endl;

    // Get first and last element
    cout << names.front() << " " << names.back() << endl;

    // Accessing using .at() is preferable compared to []
    cout << names.at(1) << endl;

    // Add elements
    names.push_back("Billy");
    cout << names.back() << endl;

    // Remove elements
    names.pop_back();
    cout << names.back() << endl;

    // Note: Elements are usually only added and removed from the end of the vector. 
    // If you need to add or remove elements from both ends, it is often better to use a deque instead of a vector.

    // Vector size: using .size()
    cout << names.size() << endl;

    // Check if empty
    cout << names.empty() << endl;
    
    return 0;
}