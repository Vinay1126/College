#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("destination.txt");
    in.seekg(0, in.end);
    int len = in.tellg();
    char c;
    while (len--)
    {
        in.seekg(len, in.beg);
        in >> c;
        cout << c;
    }
}