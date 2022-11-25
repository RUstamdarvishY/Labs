#include <iostream>
#include <cmath>

using namespace std;

int factorial(int x)
{
    int res = 1;
    for (int i = 1; i < x; ++i)
        res *= i + 1;

    return res;
}

int main()
{
    int a;
    int b;
    int n;
    int h;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for n: ";
    cin >> n;
    cout << "Enter value for h: ";
    cin >> h;

    int s;
    int y;
    int k = 0;

    while (k < n, k++)
    {
        for (int x = a; x < b; x += h)
        {
            s = (pow(x, 2 * k)) / factorial(2 * k);
            y = (exp(x) + exp(-x)) / 2;

            cout << "S = " << s
                 << "Y = " << y
                 << "|Y-S| = " << abs(y - s) << endl;
        }
    }
}