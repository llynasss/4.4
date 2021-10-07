// Lab_04_4.cpp
// Хмиз Магдалина
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 21

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;


    while (x <= xk)
    {
        if (x <= -6 - R)
            y = 0;
        else
            if (-6 - R < x && x <= -6)
                y = -sqrt((R * R) - ((x + 6) * (x + 6)));
            else
                if (-6 < x && x <= -R)
                    y = ((R * R) + R * x) / (-R + 6);
                else
                    if (-R < x && x <= 0)
                        y = sqrt((R * R) - (x * x));
                    else
                        if (0 < x && x <= 3)
                            y = R - ((R * x) / 3);
                        else
                            y = ((R * x) - (3 * R)) / 6;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}

