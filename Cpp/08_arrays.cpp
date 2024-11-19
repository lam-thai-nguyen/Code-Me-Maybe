#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // Declare
    int dob[4] = {1940, 1942, 1943, 1940};

    // Access elements
    for (int i = 0; i < 4; i++)
    {
        cout << dob[i] << "\t";
    }
    cout << "\n";

    // Change array element
    dob[1] = 2024 - dob[1];
    cout << dob[1] << endl;

    // Omitting array size is fine: string cars[] = {"Volvo", "BMW", "Ford"};

    // Array size is fixed, you cannot add or remove an element
    // For this purpose, C++ provides vectors, which are resizable arrays (from <vector> library).
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Tesla"); // Adding another element to the vector
    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\t";
    }
    cout << "\n";

    // Get array size: sizeof() -> return bytes count
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength << endl;

    // Multi dimensional arrays
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    cout << letters[0][0] << endl;

    return 0;
}