#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
    int countChar, countUpper, countLower;
    int countWords, countLines, countDigits, countSpecial;
    char ch;
    string word, line;
    ifstream in("destination.txt");

    // a) Number of characters
    while (!in.eof())
    {
        in >> ch;
        countChar++;

        switch (ch)
        {
        case ' ':
            countWords++;
            break;

        case '\n':
            countLines++;
            countWords++;
            break;

        default:
            if (isalpha(ch))
            {
                if (isupper(ch))
                    countUpper++;
                else
                    countLower++;
                break;
            }
        }
    }

    cout << "Number of characters: " << countChar
         << "\nNumber of words: " << countWords
         << "\nNumber of lines: " << countLines
         << "\nNumber of uppercase letters: " << countUpper
         << "\nNumber of lowercase letters: " << countLower
         << "\nNumber of digits: " << countDigits
         << "\nNumber of special symbols: " << countSpecial << endl;

    return 0;
}