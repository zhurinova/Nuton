#include <iostream>
#include <math.h>

using namespace std;

double f1(double x)
{
    return pow(x, 4) - 18 * x - 10;
}

double f12(double x)
{
    return 4 * pow(x, 3) - 18;
}

double f2(double x)
{
    return pow(5, x) - 6 * x - 7;
}

double f21(double x)
{
    return log(5) * pow(5, x) - 6;
}

void Nuton1(double x0, double e)
{
    double x1 = 0;
    x1 = x0 - (pow(x0, 4) - 18 * x0 - 10 )/ (4 * pow(x0, 3) - 18);
    int n = 0;
    while (abs(x0 - x1) > e)
    {
        x0 = x1;
        x1 = x0 - (pow(x0, 4) - 18 * x0 - 10) / (4 * pow(x0, 3) - 18);
        n = n + 1;
        if (n > 1000) {
            break;
        }
        cout << x1 << endl;
    }
    x0 = x1;
    cout << "Количество итераций - " << n << endl << "Корень - " << x0 << endl;
}

void Nuton2(double x0, double e)
{
    double x1 = 0;
    x1 = x0 - (pow(5, x0) - 6 * x0 - 7) / (log(5) * pow(5, x0) - 6);
    int n = 0;
    while (abs(x0 - x1) > e)
    {
        x0 = x1;
        x1 = x0 - (pow(5, x0) - 6 * x0 - 7) / (log(5) * pow(5, x0) - 6);
        n = n + 1;
        if (n > 1000) {
            break;
        }
        cout << x1 << endl;
    }
    x0 = x1;
    cout << "Количество итераций - " << n << endl << "Корень - " << x0 << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите x0 для нахождения корня" << endl;
    double x1;
    cin >> x1;
    Nuton1(x1, 0.00001);
    cout << "Введите x0 для нахождения корня" << endl;
    double x2;
    cin >> x2;
    Nuton1(x2, 0.00001);
    cout << "Введите x0 для нахождения корня" << endl;
    double x3;
    cin >> x3;
    Nuton2(x3, 0.00001);
    cout << "Введите x0 для нахождения корня" << endl;
    double x4;
    cin >> x4;
    Nuton2(x4, 0.00001);
}

