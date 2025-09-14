#include <iostream>

using namespace std;

double* enterArrayData();
void outputArrayData(double* arr, int size);
void sumArray(double* arr, int size);

const int SIZE = 5;

int main()
{
    double *iptr = nullptr;
    iptr = enterArrayData();

    outputArrayData(iptr, SIZE);
    sumArray(iptr, SIZE);

    return 0;
}

double* enterArrayData()
{
    double* array = nullptr;
    array = new double[SIZE];

    cout << "Data entry for the array:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "> Element #" << i << ": ";
        cin >> array[i];
    }

    cout << "Data entry complete.\n";
    return array;
}

void outputArrayData(double* arr, int size)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    }

    cout << endl;
}

void sumArray(double* arr, int size)
{
    double sum = 0;
    
    cout << "Sum of values: ";
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;  
    }

    cout << sum << endl;
}