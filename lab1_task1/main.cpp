#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Rectangle {
private:
    double width, length;

public:
    Rectangle(double a, double b) : length(a), width(b) {}

    double perimeter() {
        return (width + length) * 2;
    }

    double area() {
        return width * length;
    }

    double diagonal() {
        return sqrt((length * length) + (width * width));
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    double someLength, someWidth;

    cout << "Введите длину прямоугольника: ";
    cin >> someLength;

    cout << "Введите ширину прямоугольника: ";
    cin >> someWidth;

    Rectangle some(someLength, someWidth);

    cout << "Периметр вашего прямоугольника равен: " << some.perimeter() << endl;
    cout << "Площадь вашего прямоугольника равна: " << some.area() << endl;
    cout << "Длина диагонали вашего прямоугольника равна: " << some.diagonal() << endl;

    return 0;
}