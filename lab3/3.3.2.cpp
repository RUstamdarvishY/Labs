#include <iostream>
#include <cmath>

using namespace std;


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
    int factorial = 1;
    int k = 0;

    while (k < n, k++)
    {
        for (int x = a; x < b; x += h)
        {
            s = (pow(x, 2 * k)) / factorial * (2 * k);
            y = (exp(x) + exp(-x)) / 2;
            factorial *= -1; 

            cout << "S = " << s
                 << "Y = " << y
                 << "|Y-S| = " << abs(y - s) << endl;
        }
    }
}