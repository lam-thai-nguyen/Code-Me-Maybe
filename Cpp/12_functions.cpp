#include <iostream>
using namespace std;

// Function declaration/prototyping
void greet();
void greet_name(string name = "Paul");
int plusFunc(int x, int y);
double plusFunc(double x, double y);

int main()
{
    greet();
    greet_name();
    greet_name("John");
    cout << plusFunc(1, 2) << endl; 
    cout << plusFunc(1.1, 2.1) << endl; 

    return 0;
}

void greet()
{
    cout << "Hi" << endl;
}

// Function with argument and default value
void greet_name(string name)
{
    cout << "Hi, " << name << endl;
}

// Function overloading: 2 functions having the same name, different arguments
int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}