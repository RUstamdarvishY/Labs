#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double get_max(double x, double y)
{
    if (x >= y)
        return x;
    else
        return y;
}

double get_min(double x, double y, double z)
{
    if (x <= y && x <= z)
    {
        if (x != 0)
            return x;
        else{
            cout << "Division by zero" << endl;
            exit(1);
        } 
    }
    else if (y <= x && y <= z)
    {
        if (y != 0)
            return y;
        else{
            cout << "Division by zero" << endl;
            exit(1);
        } 
    }
    else if (z <= x && z <= y)
    {
        if (z != 0)
            return z;
        else{
            cout << "Division by zero" << endl;
            exit(1);
        } 
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
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number, enter new value: " << endl;
            cin >> x;
        }
        else
            break;
    }

    cout << "Enter value for y: ";
    cin >> y;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number, enter new value: " << endl;
            cin >> y;
        }
        else
            break;
    }
    cout << "Enter value for z: ";
    cin >> z;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number, enter new value: " << endl;
            cin >> z;
        }
        else
            break;
    }

    m = (get_max(get_max(x, y), get_max(y, z))) / get_min(x, y, z);
    cout << "m = " << m << endl;

    return 0;
}