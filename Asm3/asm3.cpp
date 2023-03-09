/**

PANG Yu Him #22083893D
COMP1011 - Lab 4 - Assignment 2

Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/

#include <iostream>
using namespace std;

int main() {
    // Max 1000 elements in array.
    // Initalise count & sum = 0.
    int arr[1000], nums, count = 0, sum = 0; 

    cout << "Enter a sequence of integer (-999 to finish): ";
    while (cin >> nums && nums != -999) {
        arr[count] = nums;
        count++;
    }

    for (int i = 0; i < count; i++) {
        if (i % 2 == 0)
            sum += arr[i];
        else
            sum -= arr[i];
    }

    cout << sum << endl;
    return 0;
}