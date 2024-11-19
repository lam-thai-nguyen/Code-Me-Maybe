#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 3;

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }

    // Short hand if-else
    // variable = (condition) ? expressionTrue : expressionFalse;
    
    return 0;
}