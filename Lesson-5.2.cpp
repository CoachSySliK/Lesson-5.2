﻿#include <iostream>

using namespace std;

int main()
{
    int money;

    cout << "Допустиммая сумма снятия денег кратная 100. Максимальная сумма 100 000 рублей.\n";
    cout << "Введите сумму, которую хотите снять:\n";
    cin >> money;    

    int i = 0; //переменная для запроса суммы, до тех пор пока не будет введено допустимое значение

    while (i < 1) {
        if (money <= 0) {
            cout << "Не допустимая сумма для снятия\n";
            cout << "Введите не отрицательное значение:\n";
            cin >> money;
        }
        else if (money > 100000) {
            cout << "Не допустимая сумма для снятия\n";
            cout << "Введите сумму, не более 100 000:\n";
            cin >> money;
        }
        else if (0 != money % 100) {
            cout << "Не допустимая сумма для снятия\n";
            cout << "Введите сумму, кратную 100:\n";
            cin >> money;
        }
        else {
            cout << "Получите и распишитесь!";
            i++;
        }
    }
    
    
    return 0;
}