#include <iostream>
#include <string>
using namespace std;

int main()
{

    string input;
    while (true)
    {
        cout << "please input one line: ";
        getline(cin, input);
        cout << "your input is:" << input << endl;
    }
    return 0;
}