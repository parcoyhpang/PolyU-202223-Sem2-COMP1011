/**

PANG Yu Him #22083893D
COMP1011 - Lab 4 - Assignment 2
Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/

#include <iostream>

using namespace std;
const int MAX_SIZE = 1000;

void sortOddEven(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    int input;

    cout << "Enter a sequence of integer (-999 to finish): ";
    cin >> input;

    while (input != -999 && size < MAX_SIZE)
    {
        arr[size] = input;
        size++;
        cin >> input;
    }

    sortOddEven(arr, size);

    return 0;
}

void sortOddEven(int arr[], int size)
{
    int odd[MAX_SIZE];
    int even[MAX_SIZE];
    int oddSize = 0;
    int evenSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenSize] = arr[i];
            evenSize++;
        }
        else
        {
            odd[oddSize] = arr[i];
            oddSize++;
        }
    }

    for (int i = 0; i < oddSize; i++)
    {
        cout << odd[i] << " ";
    }

    for (int i = evenSize - 1; i >= 0; i--)
    {
        cout << even[i] << " ";
    }

    cout << endl;
}