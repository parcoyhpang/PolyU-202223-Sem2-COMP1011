/**

PANG Yu Him #22083893D
COMP1011 - Lab 4 - Assignment 2

Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int height;
    cout << "please input the branch size: ";
    cin >> height;

    // Input validations
    if (height < 3) {
        cout << "The height must be at least 3" << endl;
        return 0;
    }

    if (height % 2 != 0){
        cout << "The height must be an even number" << endl;
        return 0;
    }

    int trunk_height = height / 2;
    char letter = 'A';

    // Print branch
    for (int row = 0; row < height; row++) {
        int num_spaces = height - row - 1;
        for (int i = 0; i < num_spaces; i++) {
            cout << " ";
        }
        int num_letters = 2 * row + 1;
        for (int i = 0; i < num_letters; i++) {
            cout << letter;
            letter++;
            if (letter > 'Z') {
                letter = 'A';
            }
        }
        cout << endl;
    }

    // Print trunk
    for (int row = 0; row < trunk_height; row++) {
        int num_spaces = height - 2;

        for (int i = 0; i < num_spaces; i++) {
            cout << " ";
        }

        cout << letter << " " << letter << endl;
        letter++;
        if (letter > 'Z') {
            letter = 'A';
        }

    }

    return 0;
}
