// Lab_03_4.cpp
// Осташ Маркіян
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 22

#include <iostream>

using namespace std;

int main()
{
    double x;   // координата x точки
    double y;   // координата y точки
    double R;   // вхідний параметр

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // A: чверть круга радіусу R у II чверті
    // B: трикутник з вершинами (0; 0), (R; 0), (R/2; -R)
    //    сторони: y = 0, y = -2x, y = 2x - 2R
    if ((x <= 0 && y >= 0 && x * x + y * y <= R * R) ||
        (y <= 0 && y >= -2 * x && y >= 2 * x - 2 * R))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    return 0;
}
