#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void create_and_open(string filename);
void read(string filename);

int main()
{
    string filename = "./my_file.txt";
    read(filename);

    return 0;
}

void create_and_open(string filename)
{
    // Create and open a file
    ofstream MyFile(filename);

    // Write to the file
    MyFile << "In Penny Lane, there is a barber showing photographs.";

    // Close file
    MyFile.close();
}

void read(string filename)
{
    // Create a buffer
    string buffer;

    // Read
    ifstream MyFile(filename);

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyFile, buffer))
    {
        // Output the text from the file
        cout << buffer;
    }

    // Close
    MyFile.close();
}