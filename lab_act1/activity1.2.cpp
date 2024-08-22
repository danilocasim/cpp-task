#include <iostream>
using namespace std;

int celsiusToFahrenheit(int celsius);

int main(void) {
    int celsius;
    int fahrenheit;

    cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    fahrenheit = celsiusToFahrenheit(celsius);

    cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit\n";
}

int celsiusToFahrenheit(int celsius) {
    return celsius * 9 / 5 + 32;
}