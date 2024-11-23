// STL is a library that consist of different data structures and algorithms to effectively store and manipulate data.
// The most common DS are: vector, list, stack, queue, deque, set, map

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main()
{
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars)
    {
        cout << car << "\n";
    }

    return 0;
}