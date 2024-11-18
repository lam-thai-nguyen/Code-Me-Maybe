#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Types: int, double, char, string, bool
    cout << "C++ allocates " << sizeof(int) << " bytes for int\n";
    cout << "C++ allocates " << sizeof(double) << " bytes for double\n";
    cout << "C++ allocates " << sizeof(char) << " bytes for char\n";
    cout << "C++ allocates " << sizeof(string) << " bytes for string\n";
    cout << "C++ allocates " << sizeof(bool) << " bytes for bool\n";

    // Declaring
    unsigned int max_value = 4294967295;
    cout << max_value << endl;

    string short_text = "Hello, World!"; // 13 characters
    cout << "short_text: " << sizeof(short_text) << endl;
    cout << "short_text: " << short_text.size() << endl;
    
    string long_text = "Imagine to John Lennon is Let It Be to Paul McCartney!"; // 54 characters
    cout << "long_text: " << sizeof(long_text) << endl;
    cout << "long_text: " << long_text.size() << endl;

    // Multiple variables
    int x, y, z;
    x = y = z = 50;

    return 0;
}