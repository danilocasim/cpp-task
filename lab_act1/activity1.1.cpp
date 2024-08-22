#include <iostream>
using namespace std;

int getSum(int num1, int num2);
int getDifference(int num1, int num2);
int getProduct(int num1, int num2);
int getQuotient(int num1, int num2); 
int getRemainder(int num1, int num2); 


int main(void) {
    int firstNum;
    int secondNum;
    
    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the second number: ";
    cin >> secondNum;
    
    cout << "Sum: " << getSum(firstNum, secondNum) << "\n";
    cout << "Difference: " << getDifference(firstNum, secondNum) << "\n";
    cout << "Product: " << getProduct(firstNum, secondNum) << "\n";
    cout << "Quotient: " << getQuotient(firstNum, secondNum) << "\n";
    cout << "Remainder: " << getRemainder(firstNum, secondNum) << "\n";
}

int getSum(int num1, int num2) {
    return num1 + num2;
}

int getDifference(int num1, int num2) {
    return num1 - num2;
}

int getProduct(int num1, int num2) {
    return num1 * num2;
}

int getQuotient(int num1, int num2) {
    return num1 / num2;
}

int getRemainder(int num1, int num2) {
    return num1 % num2;
}


