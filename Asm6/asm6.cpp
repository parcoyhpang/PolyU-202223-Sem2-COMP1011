/**

PANG Yu Him #22083893D
COMP1011 - Lab 8 - Assignment 6
Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_STUDENTS = 200;
    const int MAX_NAME_LENGTH = 50;
    char students[MAX_STUDENTS][MAX_NAME_LENGTH+1];
    int numStudents = 0;

    cout << "Enter student names and input END to finish the input:" << endl;

    while (numStudents < MAX_STUDENTS) {
        char name[MAX_NAME_LENGTH+1];
        cin >> name;

        if (strcmp(name, "END") == 0) {
            break;
        }

        bool valid = true;
        for (int i = 0; i < strlen(name); i++) {
            if (!isalpha(name[i])) {
                valid = false;
                break;
            }

            if (isspace(name[i])) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "Wrong input: please input only upper-case and low-case letters with no space in between" << endl;
            continue;
        }

        for (int i = 0; i < strlen(name); i++) {
            if (name[i] >= 'a' && name[i] <= 'z') {
                name[i] = name[i] - 'a' + 'A';
            }
        }
        strcpy(students[numStudents], name);
        numStudents++;
    }

    /* Selection Sort */

    for (int i = 0; i < numStudents-1; i++) {
        for (int j = i+1; j < numStudents; j++) {
            if (strcmp(students[i], students[j]) > 0) {
                char temp[MAX_NAME_LENGTH+1];
                strcpy(temp, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], temp);
            }
        }
    }

    for (int i = 0; i < numStudents; i++) {
        cout << students[i] << endl;
    }

    return 0;
}