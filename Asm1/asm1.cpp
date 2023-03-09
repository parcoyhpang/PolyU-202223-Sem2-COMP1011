/**

PANG Yu Him #22083893D
COMP1011 - Lab 3 - Assignment 1

Copyright (c) 2023 PARCO YH PANG 
The usual MIT license applies.
Say hi: info@parcopang.com ** parcopang.com

**/

/*
NOTE TO FUTURE SELF:

(1):  No "cmath" here.
cases 3 and 4, i.e., power and square root, are implemented 
particularly to not use the pow() and sqrt() functions or any
library like cmath.  

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int choice;
  float a, b;
  
  cout << "MENU" << endl;
  cout << "     1. Divide, a/b" << endl;
  cout << "     2. Multiply, a*b" << endl;
  cout << "     3. Power, a^b" << endl;
  cout << "     4. Square root, sqrt(a)" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  
  switch(choice) {
    case 1:
    case 2:
    case 3:
      cout << "Enter two numbers: ";
      cin >> a >> b;
      break;
    case 4:
      cout << "Enter a number: ";
      cin >> a;
      break;
    default:
      cout << "Invalid choice." << endl;
      return 0;
  }
  
  switch(choice) {
    case 1:
      cout <<  a << "/" << b << "=" << fixed << setprecision(3) <<  a/b << endl;
      break;
    case 2:
      cout <<  a << "/" << b << "=" << fixed << setprecision(3) << a*b << endl;
      break;
    case 3: {
      float result = 1;
      for (int i = 0; i < b; i++) {
        result *= a;
      }
      cout << a << "^" << b << "=" << fixed << setprecision(3) <<result << endl;
      break;
    }
    case 4: {
      float temp = a;
      float epsilon = 0.0001;
      int i = 0;
      while (i < 100) {
        float prev = temp;
        temp = (a/temp + temp) / 2;
        if (abs(temp - prev) < epsilon * temp) {
          break;
        }
        i++;
      }
      cout << "sqrt(" << a << ")=" << fixed << setprecision(3) << temp << endl;
      break;
    }
  }
  return 0;
}