#include <iostream>

using namespace std;

double* enterArrayData();
double* outputArrayData();
void sumArray();

const int SIZE = 5;

int main()
{
    double *iptr = nullptr;
    iptr = enterArrayData();

   
    
}

double* enterArrayData()
{
    double* array = nullptr;
    array = new double[SIZE];

    cout << "Data entry for the array:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "> Element #" << i << ": \n";
        cin >> array[i];
    }

    return array;
}

double* outputArrayData(double &arr)
{

}