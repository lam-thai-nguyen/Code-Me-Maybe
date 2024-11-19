#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "George Harrison";

    // While loop
    int temp = 0;
    while (temp < name.length())
    {
        cout << name[temp];
        temp++;
    }
    cout << "\n";

    // For loop: for (statement 1; statement 2; statement 3)
    // Statement 1 is executed (one time) before the execution of the code block.
    // Statement 2 defines the condition for executing the code block.
    // Statement 3 is executed (every time) after the code block has been executed.
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i];
    }
    cout << "\n";
    
    // A "for-each loop" (also known as ranged-based for loop) is used exclusively to loop through elements in an array
    // for (type variableName : arrayName)
    int beatles[4] = {1940, 1942, 1943, 1940};
    for (int i : beatles)
    {
        cout << i << endl;
    }


    return 0;
}