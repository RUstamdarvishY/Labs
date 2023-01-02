#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double calculate_z_greater_than_one(double z, double d, double c, int func)
{
    string arr[3] = {"2x", "x^2", "x/3"};
    double x = z - 1;
    double y;

    cout << "Function of choice: " << arr[func - 1] << endl;
    if (func = 1)
    {
        y = (d * 2 * x * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
    else if (func = 2)
    {
        y = (d * x * x * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
    else if (func = 3)
    {
        y = (d * x / 3 * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
}

double calculate_z_less_than_one(double z, double d, double c, int func)
{
    string arr[3] = {"2x", "x^2", "x/3"};
    double x = pow(z, 2) + 1;
    double y;

    cout << "Function of choice: " << arr[func - 1] << endl;
    if (func = 1)
    {
        y = (d * 2 * x * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
    else if (func = 2)
    {
        y = (d * x * x * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
    else if (func = 3)
    {
        y = (d * x / 3 * exp(pow(sin(x), 3)) + c * log(x + 1)) / sqrt(x);
        return y;
    }
}

int main()
{
    double z;
    double d;
    double c;
    double res;
    int func;

    cout << "Enter value for z: ";
    cin >> z;
    while (true)
    {
        if (cin.fail() || z == 1)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number and not equal 1, enter new value: " << endl;
            cin >> z;
        }
        else
            break;
    }
    cout << "Enter value for d: ";
    cin >> d;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number, enter new value: " << endl;
            cin >> d;
        }
        else
            break;
    }
    cout << "Enter value for c: ";
    cin >> c;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number, enter new value: " << endl;
            cin >> c;
        }
        else
            break;
    }

    cout << "Choose a function to calculate, enter 1 for 2x, enter 2 for x^2, enter 3 for x/3: ";
    cin >> func;
    while (true)
    {
        if (cin.fail() || !(func == 1 || func == 2 || func == 3))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number and equal 1, 2 or 3, enter new value: " << endl;
            cin >> func;
        }
        else
            break;
    }

    if (z >= 1)
    {
        res = calculate_z_greater_than_one(z, d, c, func);
        cout << "For z >= 1, y = " << res << endl;
    }
    else if (z < 1)
    {
        res = calculate_z_less_than_one(z, d, c, func);
        cout << "For z < 1, y = " << res << endl;
    }

    return 0;
}