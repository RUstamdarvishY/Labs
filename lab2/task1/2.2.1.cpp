#include <iostream>
#include <cmath>

using namespace std;

int calculate_z_greater_than_one(double z)
{
    int x = z - 1;
    int y;

    y = (exp(pow(sin(x), 3)) + log(x + 1)) / sqrt(x);
    return y;
}

int calculate_z_less_than_one(double z)
{
    int x = pow(z, 2) + 1;
    int y;

    y = (exp(pow(sin(x), 3)) + log(x + 1)) / sqrt(x);
    return y;
}

int main()
{
    double z;

    cout << "Enter value for z: ";
    cin >> z;

    if (z >= 1)
    {
        cout << "For z >= 1, y = " << calculate_z_greater_than_one(z) << endl;
    }
    if (z < 1)
    {
        cout << "For z < 1, y = " << calculate_z_less_than_one(z) << endl;
    }

    return 0;
}