﻿// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    double a;
    double b;
    int n;
    double sum;

    cout << "ВВедите первое число" << endl;
    cin >> a;

    cout << "ВВедите второе число" << endl;
    cin >> b;

    cout << "Выберите \n 1. Сложения  \n 2. Вычитание \n 3. Умножение \n 4. Деление" << endl;
    cout << "----------------------------------------- " << endl;

    cout << "Выбраное число" << endl;
    cin >> n;
    cout << "----------------------------------------- " << endl;

    if (n == 1) {
        sum = a + b;
        cout << a <<"+" << b << endl;
    } 
    else  if (n == 2) {
        sum = a - b;
        cout << a << "-" << b << endl;
    }
    else if (n == 3) {
        sum = a * b;
        cout << a << "*" << b << endl;
    }
    else if (n == 4) {
        sum = a / b;
        cout << a << "/" << b << endl;
    }
    cout << "----------------------------------------- " << endl;
    cout << "Результат будет : " << sum << endl;
    
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
