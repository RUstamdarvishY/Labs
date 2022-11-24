#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    string str = "1 2 3 4 5 6 6 99 325 12";

    stringstream stream;

    int num;
    stream << str;
    while (!stream.eof())
    {
        stream >> num;
        if (num % 2 == 0)
            cout << num << endl;
    }

    return 0;
}