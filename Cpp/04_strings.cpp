#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare
    string band = "The Beatles";
    // Concat: +
    string first_name = "John ";
    string last_name = "Lennon";
    string full_name = first_name + last_name;
    cout << full_name << endl;
    // Concat using .append (string is an object)
    string full_name_append = first_name.append(last_name);
    cout << full_name_append << endl;
    // Get length: string.length() or string.size(). size is an alias of length
    cout << full_name_append.length() << endl;
    // Accessing strings: using string[] or string.at()
    cout << full_name_append[0] << endl;
    cout << full_name_append.at(0) << endl;
    // Inputting a string: using getline(cin, string)
    string songwriter;
    cout << "Who is the best songwriter: ";
    getline(cin, songwriter);
    cout << songwriter << endl;

    return 0;
}