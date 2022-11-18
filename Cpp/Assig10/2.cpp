// C++ Program to demonstrate
// copying the content of a .txt file
#include <fstream>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream ini_file{
        "Texting.txt"};
    ofstream out_file{"copy.txt"};
    if (ini_file && out_file)
    {

        while (getline(ini_file, line))
        {
            out_file << line << "\n";
        }
        cout << "Copy Finished \n";
    }
    else
    {
        // Something went wrong
        printf("Cannot read File");
    }
    // Closing file
    ini_file.close();
    out_file.close();
    return 0;
}
