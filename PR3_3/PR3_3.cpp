// Lab_03_3.cpp
// Осташ Маркіян
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 22

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;   // вхідний аргумент
    double R;   // вхідний параметр (0 < R < 5)
    double y;   // результат обчислення виразу

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -8)
        y = -R;                             // горизонтальна пряма y = -R
    else
        if (x <= -R)
            y = R * (x + R) / (8 - R);      // пряма через (-8; -R) та (-R; 0)
        else
            if (x <= R)
                y = -sqrt(R * R - x * x);   // нижня дуга кола, центр (0; 0)
            else
                if (x <= 5)
                    y = 2 * (x - R) / (5 - R);  // пряма через (R; 0) та (5; 2)
                else
                    y = 3;                  // горизонтальна пряма y = 3

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
