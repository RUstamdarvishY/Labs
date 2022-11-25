#include <iostream>
#include <cmath>

using namespace std;

double calculate_z_greater_than_one(double z, double d, double c, int func)
{
    string arr[3] = {"2x", "x^2", "x/3"};
    double x = z - 1;
    double y;

    cout << "Function of choice is" << arr[func];
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

    cout << "Function of choice is" << arr[func];
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
    cout << "Enter value for d: ";
    cin >> d;
    cout << "Enter value for c: ";
    cin >> c;

    cout << "Choose a function to calculate, enter 1 for 2x, enter 2 for x^2, enter 3 for x/3: ";
    cin >> func;

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