#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void fill_myself(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Введите значение: ";
        cin >> arr[i];
    }
}

void fill_random(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        srand(time(nullptr));
        int number = rand() % 100;
    }
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

    cout << "Введите размер массива (не больше 20): ";
    cin >> n;
    if (cin.fail() || n > 20)
    {
        cout << "Размер массива должен быть числом и не может быть больше 20" << endl;
        // cin.clear();
        // cin.ignore(numeric_limits<streamsize>::max());
        main();
    }
    int arr[n];
    int size = sizeof(arr) / sizeof(int);

    cout << "Чтобы заполнить массив вручную введите 1, чтобы заполнить массив рандомными значениями введите 2: ";
    cin >> option;

    if (option == 1)
        fill_myself(arr, size);
    else if (option == 2)
        fill_random(arr, size);
    else
        cout << "invalid option " << option << endl;

    remove_positive(arr, size);
    sort_array(arr, size);

    for (int i : arr)
        cout << i << " ";

    return 0;
}