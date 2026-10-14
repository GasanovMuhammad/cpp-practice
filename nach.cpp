#include <iostream>
using namespace std;

void analyze(int a, int b, int c, int& mysum, int& myproduct, int& mymax)
{
    if (a >= b && a >= c)
    {
        mymax = a;
    }
    else if (b > a && b > c)
    {
        mymax = b;
    }
    else
    {
        mymax = c;
    }

    myproduct = a*b*c;

    mysum = a+b+c;
}

int main()
{
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    cout << "Введено: " << a << ", " << b << ", " << c << endl;

    int mysum = 0, myproduct = 0, mymax = 0;
    analyze(a, b, c, mysum, myproduct, mymax);
    cout << "Сумма: " << mysum << endl << "Произведение: " << myproduct << endl << "Максимум: " << mymax << endl;
}