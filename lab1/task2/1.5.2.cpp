#include <iostream>
#include <cmath>

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
    if (!(cin) || a <= 0)
    {
        cout << "value must be number and greater than zero" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }

    cout << calculate_z1(a) << endl;
    cout << calculate_z2(a) << endl;

    return 0;
}