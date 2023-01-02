#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double calculate_z1(double a)
{
    return (((a + 2) / (sqrt(2 * a))) - (a / (sqrt(2 * a) + 2)) + (2 / (a - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2));
}

double calculate_z2(double a)
{
    return 1 / (sqrt(a) + sqrt(2));
}

int main()
{
    double a;
    cout << "Enter value for a: ";
    cin >> a;
    while (true)
    {
        if (cin.fail() || a <= 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "value must be number and greater than zero, enter new value: " << endl;
            cin >> a;
        }
        else
            break;
    }

    cout << calculate_z1(a) << endl;
    cout << calculate_z2(a) << endl;

    return 0;
}