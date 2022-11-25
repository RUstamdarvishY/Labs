#include <iostream>
#include <cmath>

using namespace std;

double get_max(double x, double y)
{
    if (x > y)
        return x;
    else
        return y;
}

double get_min(double x, double y, double z)
{
    if (x < y && x < z)
    {
        if (x != 0)
            return x;
        cout << "Division by zero" << endl;
    }
    else if (y < x && y < z)
    {
        if (y != 0)
            return y;
        cout << "Division by zero" << endl;
    }
    else if (z < x && z < y)
    {
        if (z != 0)
            return z;
        cout << "Division by zero" << endl;
    }
}

int main()
{
    double x;
    double y;
    double z;
    double m;

    cout << "Enter value for x: ";
    cin >> x;
    if (!(cin))
    {
        cout << "value must be a number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }

    cout << "Enter value for y: ";
    cin >> y;
    if (!(cin))
    {
        cout << "value must be a number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }

    cout << "Enter value for z: ";
    cin >> z;
    if (!(cin))
    {
        cout << "value must be a number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }

    m = (get_max(get_max(x, y), get_max(y, z))) / get_min(x, y, z);
    cout << "m = " << m << endl;

    return 0;
}