#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    // Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:
    stack<string> names;

    // Add elements
    names.push("John");
    names.push("Paul");
    names.push("George");
    names.push("Ringo");

    // Access
    cout << names.top() << endl;

    // Remove
    names.pop();
    cout << names.top() << endl;

    // .size(), empty()...
    
    return 0;
}