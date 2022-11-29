#include <iostream>
#include <cstdlib>
#include <cmath>
#include <random>

using namespace std;

void fill_myself(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
}

void fill_random(int arr[], int size)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(-100, 100);

    for (int i = 0; i < size; i++)
        arr[i] = distr(gen);
}

void sort_array(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}

void remove_positive(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 0;
        }
    }
}

int main()
{
    int n;
    int option;

    cout << "Enter array size (less than 20): ";
    cin >> n;
    while (true)
    {
        if (cin.fail() || n > 20)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Size of array must be a number and less than 20" << endl;
            cin >> n;
        }
        else
            break;
    }
    int arr[n];
    int size = sizeof(arr) / sizeof(int);

    cout << "Чтобы заполнить массив вручную введите 1, чтобы заполнить массив рандомными значениями введите 2: ";
    cin >> option;
    while (true)
    {
        if (cin.fail() || !(option == 1 || option == 2))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Option variable must be equal to 1 or 2" << endl;
            cin >> n;
        }
        else
            break;
    }

    if (option == 1)
        fill_myself(arr, size);
    else if (option == 2)
        fill_random(arr, size);

    remove_positive(arr, size);
    sort_array(arr, size);

    for (int i : arr)
        cout << i << " ";

    return 0;
}