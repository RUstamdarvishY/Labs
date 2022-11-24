#include <iostream>
#include <cmath>

using namespace std;

double calculate_z1(double a)
{
    return (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
}

double calculate_z2(double a)
{
    return (1 - tan(a)) / (1 + tan(a));
}

int main()
{
    double a;
    cout << "Enter value for a: ";
    cin >> a;

    cout << calculate_z1(a) << endl;
    cout << calculate_z2(a) << endl;

    return 0;
}