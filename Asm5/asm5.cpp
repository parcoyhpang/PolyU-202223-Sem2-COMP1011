/**

PANG Yu Him #22083893D
COMP1011 - Lab 7 - Assignment 5
Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/
#include <iostream>
#include <iomanip>  /* for setprecision */

using namespace std;

const int MAX_SIZE = 1000;

int findLargest(int arr[], int size);
int findSmallest(int arr[], int size);
int findTotal(int arr[], int size);
double findAverage(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    int num;

    cout << "Enter a sequence of integer (-999 to finish): ";
    cin >> num;

    while (num != -999){
        arr[size] = num;
        size++;
        cin >> num;
    }

    cout << "Largest Number is " << findLargest(arr, size) << endl;
    cout << "Smallest Number is " << findSmallest(arr, size) << endl;
    cout << "Total is " << findTotal(arr, size) << endl;
    cout << "Average is " << fixed << setprecision(3) << findAverage(arr, size) << endl;

    return 0;
}

int findLargest(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 1; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int findSmallest(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 1; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }

    return smallest;
}

int findTotal(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++){
        total += arr[i];
    }

    return total;
}

double findAverage(int arr[], int size)
{
    double average = 0;

    for (int i = 0; i < size; i++){
        average += arr[i];
    }

    average /= size;
    return average;
}