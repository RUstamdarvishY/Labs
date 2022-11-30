#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;

    int matrix[n][n];
    bool sim = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Введите значения матрицы: ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }  
    cout << "\n";  
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (matrix[i][j] != matrix[n - 1 - j][n - 1 - i])
            {
                sim = false;
                break;
            }
        }
        if (!sim)
        {
            break;
        }
    }
    if (sim)
        cout << "Матрица симметрична относительно побочной диагонали" << endl;
    else
        cout << "Матрица не симметрична относительно побочной диагонали" << endl;
}