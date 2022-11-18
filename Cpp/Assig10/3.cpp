#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    ofstream out("Texting.txt");
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter string: ";
        getline(cin, str);
        out << str << endl;
    }
    out.close();

    ifstream in("Texting.txt");
    cout << endl;
    while (!in.eof())
    {
        in >> str;
        cout << str << " ";
    }
    in.close();
    return 0;
}