#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Ввод сторон треугольника
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    // Проверка на существование треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Периметр
        double perimeter = a + b + c;
        cout << "Периметр: " << perimeter << endl;

        // Полупериметр
        double s = perimeter / 2;

        // Площадь по формуле Герона
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Площадь по формуле Герона: " << area << endl;

        // Проверка на равнобедренность
        if (a == b || a == c || b == c) {
            cout << "Треугольник является равнобедренным." << endl;
        } else {
            cout << "Треугольник не является равнобедренным." << endl;
        }

    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    return 0;
}
