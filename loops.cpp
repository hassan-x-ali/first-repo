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

//     //if-else-if ladder
//     int marks;
//     cout << "Enter your marks: ";
//     cin >> marks;
//     if (marks >= 90) {
//         cout << "Grade: A" << endl;
//     }
//     else if (marks >= 80) {
//         cout << "Grade: B" << endl;
//     }
//     else if (marks >= 70) {
//         cout << "Grade: C" << endl;
//     }
//     else if (marks >= 60) {
//         cout << "Grade: D" << endl;
//     }
//     else {
//         cout << "Grade: F" << endl;
//     }
    
//     //Find character uppercase or lowercase
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= 'A' && ch <= 'Z') {
//         cout << "The character is uppercase." << endl;
//     }
//     else if (ch >= 'a' && ch <= 'z') {
//         cout << "The character is lowercase." << endl;
//     }
//     else {
//         cout << "The character is not an alphabet." << endl;
//     }
    

//     return 0;
// }