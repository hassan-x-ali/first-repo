#include <iostream>
using namespace std;

int main() {

    //if-else statement
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } 
    else if (number < 0) {
        cout << "The number is negative." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    //if-else-if ladder
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade: D" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }
    
    //Find character uppercase or lowercase
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is lowercase." << endl;
    }
    else {
        cout << "The character is not an alphabet." << endl;
    }
    
    //Ternary operator
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int max = (a > b) ? a : b;
    cout << "The maximum number is: " << max << endl;

    //while loop
    int count = 1;
    int n;
    cout << "Enter the number of iterations: ";
    cin >> n;
    cout << "Counting from 1 to " << n << " using while loop:" << endl;
    while (count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;
    
    //for loop
    cout << "Counting from 1 to " << n << " using for loop:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    //sum of all odd numbers from 1 to n using for loop
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << "The sum of all odd numbers from 1 to " << n << " is: " << sum << endl;
    
    //do-while loop
    int num = 1;
    cout << "Counting from 1 to " << n << " using do-while loop:" << endl;
    do {
        cout << num << " ";
        num++;
    } while (num <= n);
    cout << endl;

    //check if a number is prime using for loop
    int primeCandidate;
    cout << "Enter a number to check if it is prime: ";
    cin >> primeCandidate;
    bool isPrime = true;
    if (primeCandidate <= 1) {
        isPrime = false;
    } 
    else {
        for (int i = 2; i <= primeCandidate / 2; i++)
        {
            if (primeCandidate % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << "The number is prime." << endl;
    }
     else {
        cout << "The number is not prime." << endl;
    }

    //nested for loop to print a pattern
    cout << "Enter the number of rows for the pattern: ";
    int rows;
    cin >> rows;
    cout << "Printing pattern using nested for loop:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    

    return 0;
 }