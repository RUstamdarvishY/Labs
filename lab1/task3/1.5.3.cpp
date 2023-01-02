#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

double calculate_a(double x, double y, double z)
{
    if (x + pow(abs(y), 1 / 4) < 0)
    {
        cout << "Извлечение квадратного корня из отрицательного числа" << endl;
        exit(1);
    }
    if (sin(z) == 0)
    {
        cout << "Division by zero" << endl;
        exit(1);
    }
    return pow(2, -x) * (sqrt(x + pow(abs(y), 1 / 4))) * (pow(exp(x - (1 / sin(z))), 1 / 3));
}

int main()
{
    double x;
    double y;
    double z;

    cout << "Enter value for x: ";
    cin >> x;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "value must be number, enter new value: " << endl;
        cin >> x;
    }
    cout << "Enter value for y: ";
    cin >> y;
    if (!(cin))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "value must be number, enter new value: " << endl;
        cin >> y;
    }
    cout << "Enter value for z: ";
    cin >> z;
    if (!(cin))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "value must be number, enter new value: " << endl;
        cin >> z;
    }

    cout << calculate_a(x, y, z) << endl;

    return 0;
}