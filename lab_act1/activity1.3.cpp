#include <iostream>
using namespace std;

int getArea(int length, int width);

int main(void) {
    int length;
    int width;
    int area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    area = getArea(length, width);
    
    cout << "Area of the rectangle: " << area << " square units\n";
}

int getArea(int length, int width) {
    return length * width;
}