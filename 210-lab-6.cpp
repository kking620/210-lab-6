//COMSC-210 | Lab 6 | Kristofer King
//IDE Used: VSC#include <iostream>
#include <iostream>
using namespace std;

//Prototype functions to obtain the dynamic array variables from user input, to output the array data that was collected in one list,
//and to find the sum of all of the values within the generated array.
double* enterArrayData(double* arr, int size);
void outputArrayData(double* arr, int size);
void sumArray(double* arr, int size);

//A constant variable to determine the maximum size of the dynamic array
const int SIZE = 5;

int main()
{
    //initializes and declares a new dynamic array
    double *iptr = nullptr;
    iptr = new double[SIZE];

    //calls the functions to obtain user input, output the values in an organized list, and adds the values of the array together respectively.
    enterArrayData(iptr, SIZE);
    outputArrayData(iptr, SIZE);
    sumArray(iptr, SIZE);

    //deletes the values of the dynamic array
    delete [] iptr;
    return 0;
}

double* enterArrayData(double* arr, int size)
{
    cout << "Data entry for the array:\n";

    //for loop to collect the data of the array from the user input within the bounds of the array size
    for (int i = 0; i < SIZE; i++)
    {
        cout << "> Element #" << i << ": ";
        cin >> arr[i];
    }

    cout << "Data entry complete.\n";
    //returns the array values to the main function
    return arr;
}

void outputArrayData(double* arr, int size)
{
    cout << "Outputting array elements: ";

    //for loop to output the values of the array in an organized list
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";  
    }

    cout << endl;
}

void sumArray(double* arr, int size)
{
    //declaring and initializing the sum variable
    double sum = 0;
    
    cout << "Sum of values: ";
    //for loop to continuosly add the values of the array together until the sum of the array is found
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;  
    }

    cout << sum << endl;
}