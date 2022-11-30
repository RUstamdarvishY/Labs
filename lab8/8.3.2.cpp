#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return (num * factorial(num - 1));
}

double calculate_s(double x, int k)
{
    return (pow(x, 2 * k)) / factorial(2 * k);
}

double calculate_y(double x)
{
    return (exp(x) + exp(-x)) / 2;
}

double calculate_y_minus_s(double x, int k)
{
    return abs(((exp(x) + exp(-x)) / 2) - ((pow(x, 2 * k)) / factorial(2 * k)));
}

double out_rez(auto func)
{
        return func;
}


int main()
{
    double a;
    double b;
    double n;
    double h;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for h: ";
    cin >> h;
    cout << "Enter value for n: ";
    cin >> n;

    int option;
    int k = 0;

    cout << "Choose which function to calculate: 1 for S, 2 for Y, 3 for |Y-S|: ";
    cin >> option;

    while (k < n, k++)
    {
        for (int x = a; x < b; x += h)
        {
            if (option == 1)
                cout << "S: " << out_rez(calculate_s(x, k));
            else if (option == 2)
                cout << "Y: " << out_rez(calculate_y(x));
            else if (option == 3)
                cout << "|Y-S|: " << out_rez(calculate_y_minus_s(x, k));
        }
    }

    return 0;
}