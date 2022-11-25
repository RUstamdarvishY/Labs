#include <iostream>
#include <cmath>

using namespace std;

double calculate_z_greater_than_one(double z)
{
    double x = z - 1;
    double y;

    y = (exp(pow(sin(x), 3)) + log(x + 1)) / sqrt(x);
    return y;
}

double calculate_z_less_than_one(double z)
{
    double x = pow(z, 2) + 1;
    double y;

    y = (exp(pow(sin(x), 3)) + log(x + 1)) / sqrt(x);
    return y;
}

int main()
{
    double z;
    double res;

    cout << "Enter value for z: ";
    cin >> z;

    if (z >= 1)
    {
        res = calculate_z_greater_than_one(z);
        cout << "For z >= 1, y = " << res << endl;
    }
    else if (z < 1)
    {
        res = calculate_z_less_than_one(z);
        cout << "For z < 1, y = " << res << endl;
    }

    return 0;
}