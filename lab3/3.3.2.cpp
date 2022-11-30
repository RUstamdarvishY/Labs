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

    double s;
    double y;
    int k = 0;

    while (k < n, k++)
    {
        for (int x = a; x < b; x += h)
        {
            s = calculate_s(x, k);
            y = calculate_y(x);

            cout << "S = " << s
                 << "Y = " << y
                 << "|Y-S| = " << abs(y - s) << endl;
        }
    }

    return 0;
}