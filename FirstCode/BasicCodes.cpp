#include<iostream>
using namespace std;

int main() {

    //output
    cout << "Ali" << endl << "Hassan" << endl;

    //datatypes
    int a = 10;
    char b = 'A';
    float PI = 3.14f;
    bool isTrue = true;
    cout << "Integer: " << a << endl;
    cout << "Character: " << b << endl;
    cout << "Float: " << PI << endl;
    cout << "Boolean: " << isTrue << endl;

    //type conversion
    int value = b; // Implicit conversion from char to int 
    cout << "Implicitly converted value of b (char) to int: " << value << endl;

    double c = 9.99;
    int d = (int)c; // Explicit conversion from double to int
    cout << "Explicitly converted value of c (double) to int: " << d << endl;

    //input/output
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;

    //arithmetic operations
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "sum of " << n1 << " and " << n2 << " is: " << (n1 + n2) << endl;
    cout << "subtraction of " << n1 << " and " << n2 << " is: " << (n1 - n2) << endl;
    cout << "multiplication of " << n1 << " and " << n2 << " is: " << (n1 * n2) << endl;
    cout << "division of " << n1 << " and " << n2 << " is: " << (n1 / n2) << endl;
    cout << "modulus of " << n1 << " and " << n2 << " is: " << (n1 % n2) << endl;

    //relational operators
    cout << "Is " << n1 << " greater than " << n2 << "? " << (n1 > n2) << endl;
    cout << "Is " << n1 << " less than " << n2 << "? " << (n1 < n2) << endl;
    cout << "Is " << n1 << " equal to " << n2 << "? " << (n1 == n2) << endl;
    cout << "Is " << n1 << " not equal to " << n2 << "? " << (n1 != n2) << endl;
    cout << "Is " << n1 << " greater than or equal to " << n2 << "? " << (n1 >= n2) << endl;
    cout << "Is " << n1 << " less than or equal to " << n2 << "? " << (n1 <= n2) << endl;
    
    //logical operators
    int n3 = 5;
    cout << (n1>n3 && n2>n3) << endl;
    cout  << (n1<n3 || n2<n3) << endl;
    cout << !n3<< endl;

    //sum of two numbers
    int num1;
    cout << "Enter first number: ";
    cin >> num1;
    int num2;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    //unary operators
    int i = 10;
    int j = --i; // pre-decrement
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;
    return 0;
}