#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int factorial(int num)
{
    if (num == 0)
        return 1;
    else
        return (num * factorial(num - 1));
}

auto calculate_s(double a, double b, double h, int n)
{
    vector<double> results_array;
    for (int k = 0; k < n; k++)
    {
        double res = 0;
        for (int i = a; i <= b; i += h)
        {
            res += (pow(i, 2 * k)) / factorial(2 * k);
        }
        cout << "S = " << res << endl;
        results_array.push_back(res);
    }
    return results_array;
}

auto calculate_y(double a, double b, double h)
{
    vector<double> results_array;
    for (int i = a; i <= b; i += h)
    {
        double res;
        res = (exp(i) + exp(-i)) / 2;
        results_array.push_back(res);
        cout << "Y = " << res << endl;
    }
    return results_array;
}

auto calculate_y_minus_s(double a, double b, double h, int n)
{
    vector<double> res1 = calculate_s(a, b, h, n);
    vector<double> res2 = calculate_y(a, b, h);

    vector<double> res3;
    double res;
    for (int i = 0; i < res1.size(); i++)
    {
        res = abs(res2[i] - res1[i]);
        cout << "|Y-S| = " << res << endl;
        res3.push_back(res);
    }
    return res3;
}

auto out_rez(auto func)
{
    return func;
}

int main()
{
    double a;
    double b;
    int n;
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

    cout << "Choose which function to calculate: 1 for S, 2 for Y, 3 for |Y-S|: ";
    cin >> option;

    if (option == 1)
        out_rez(calculate_s(a, b, h, n));
    else if (option == 2)
        out_rez(calculate_y(a, b, h));
    else if (option == 3)
        out_rez(calculate_y_minus_s(a, b, h, n));

    return 0;
}