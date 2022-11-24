#include <iostream>
#include <cmath>

using namespace std;

int factorial(int x)
{
    int res = 1;
    for (int i = 1; i < x; ++i)
        res *= i+1;
    
    return res;
}

int calculate_S(int a, int b, int n, int h)
{
    for (int x = a; x < b; x += h)
    {
        for (int k = 0; k < n; k++)
        {
            return (pow(x, 2 * k)) / factorial(2 * k);
        }
    }
}

int calculate_Y(int a, int b, int h)
{
    for (int x = a; x < b; x += h)
    {
        return (exp(x) + exp(-x)) / 2;
    }
}

int main()
{
    int a = 1;
    int b = 100;
    int n = 1000;
    int h = 2;
    int s;
    int y;

    for (int i = 0; i < n; i++)
    {
        s = calculate_S(a, b, n, h);
        y = calculate_Y(a, b, h);

        cout << s << endl;
        cout << y << endl;
        cout << abs(y - s) << endl;
    }
}