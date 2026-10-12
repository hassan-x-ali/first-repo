#include <iostream>
using namespace std;

//sum of two numbers
int sum(int a, int b) {
    return a + b;
}

//sum of n numbers
int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }   
    return sum;
}

//factorial of n
int factN(int n){
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

//calculate the sum of digits of a number
void sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "The sum of digits is: " << sum << endl;
}   

//calling nCr binomial coefficient for n & r
void nCr(int n, int r) {
    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return;
    }
    int numerator = factN(n);
    int denominator = factN(r) * factN(n - r);
    int result = numerator / denominator;
    cout << "The value of " << n << " choose " << r << " is: " << result << endl;
}

//To ceck a number is prime or not
void isPrime(int num) {
    if (num < 1){
        cout << "Invalid input: number must be greater than 0." << endl;
        return;
    }
    bool isPrime = true;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } 
    else {
          cout << num << " is not a prime number." << endl;
     }
    }

    //to print the sum of first n prime numbers
void sumOfFirstNPrimes(int n) {
    int count = 0;
    int sum = 0;
    int num = 2; // Start checking for prime from 2
    for (int i = 0; i < n; ++i) {
        for (int j = 2; j <= num / 2; ++j) {
            if (num % j == 0) {
                num++;
                j = 1; // Reset j to check the next number
            }
        }
        sum += num;
        num++;
    }
    cout << "The sum of the first " << n << " prime numbers is: " << sum << endl;
}

//to print nth fibonacci number
int fibonacci(int n) {
    if (n <= 0) {   
        cout << "Invalid input: n must be greater than 0." << endl;
        return -1; // Return an error value
    }
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    int a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}


int main() {
    int result = sum(5, 10);
    cout << "The sum of 5 and 10 is: " << result << endl;
    int result2 = sumN(5);
    cout << "The sum of numbers from 1 to 5 is: " << result2 << endl;
    int result3 = factN(5);
    cout << "The factorial of 5 is: " << result3 << endl;   
    sumOfDigits(125);
    nCr(8, 2);
    sumOfFirstNPrimes(5);
    isPrime(7);
    int fib = fibonacci(10);
    cout << "The 10th Fibonacci number is: " << fib << endl;
    return 0;
}