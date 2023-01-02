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

    vector<double> res1 = calculate_s(a, b, h, n); 
    vector<double> res2 = calculate_y(a, b, h); 

    for (int i = 0; i < res1.size(); i++){
        cout << "|Y-S| = " << abs(res2[i] - res1[i]) << endl; 
    }

    return 0;
}