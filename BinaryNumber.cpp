#include<iostream>
using namespace std;

void decimalToBinary(int number) {
    int answer = 0, power = 1;
   if (number > 0) {
    while (number > 0) {
        int remainder = number % 2;
        number /= 2;
        answer += remainder * power;
        power *= 10;
    }
    cout << "Binary representation: " << answer << endl;
    } 
}


void binaryToDecimal(int binary) {
    int answer = 0, power = 1;
    while (binary > 0) {
        int remainder = binary % 10;
        binary /= 10;
        answer += remainder * power;
        power *= 2;
    }
    cout << "Decimal representation: " << answer << endl;
}

int main() {

 decimalToBinary(10);
 binaryToDecimal(1010);
    return 0;
}