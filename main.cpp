#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Приветствие и данные студента
    cout << "Лабораторная работа №1" << endl;
    cout << "Студент: Ли Ян Еннамович" << endl;   // ← замени на свои данные
    cout << "Группа: КБП(с)-61" << endl;                   // ← замени на свою группу
    cout << "--------------------------------" << endl;

    // Ввод двух целых чисел
    int A, B;
    cout << "10 A: ";
    cin >> A;
    cout << "5 B: ";
    cin >> B;

    // Вычисления
    cout << "Сумма (A + B) = " << A + B << endl;
    cout << "Произведение (A * B) = " << A * B << endl;
    cout << "Разность (A - B) = " << A - B << endl;

    // Проверка деления на ноль
    if (B != 0) {
        cout << "Частное (A / B) = " << A / B << endl;
        cout << "Остаток (A % B) = " << A % B << endl;
    } else {
        cout << "Ошибка: деление на ноль невозможно (B = 0)!" << endl;
    }

    return 0;
}