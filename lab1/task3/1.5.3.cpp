#include <iostream>
#include <cmath>

using namespace std;

double calculate_a(double x, double y, double z)
{
    if (x + pow(abs(y), 1 / 4) < 0)
    {
        cout << "Извлечение квадратного корня из отрицательного числа";
        exit(1);
    }
    if (sin(z) == 0)
    {
        cout << "Деление на ноль";
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
    if (!(cin))
    {
        cout << "value must be number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }
    cout << "Enter value for y: ";
    cin >> y;
    if (!(cin))
    {
        cout << "value must be number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }
    cout << "Enter value for z: ";
    cin >> z;
    if (!(cin))
    {
        cout << "value must be number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
    }

    cout << calculate_a(x, y, z) << endl;

    return 0;
}