#include <iostream>

using namespace std;

double* enterArrayData();
void outputArrayData(double* arr, int size);
void sumArray();

const int SIZE = 5;

int main()
{
    double *iptr = nullptr;
    iptr = enterArrayData();

    outputArrayData(iptr, SIZE);
    
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
        cout << endl;
    }

    cout << "Data entry complete.\n";
    return array;
}

void outputArrayData(double* arr, int size)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " \n";  
    }
}

void sumArray()
{

}