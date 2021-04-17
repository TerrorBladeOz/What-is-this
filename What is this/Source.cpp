#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251); //для русских букв, вместо setlocale(LC_ALL, "rus");
    char a;
    cout << "Введите символ: ";
    cin >> a;

    if (a >= '0' && a <= '9')
    {
        cout << "Это цифра!!!"<<endl;
    }

    else if (a >= 'A' && a <= 'Z')
    {
        cout << "Это буква английского алфавита с верхним регистром"<<endl;
    }

    else if (a >= 'a' && a <= 'z')
    {
        cout << "\nЭто буква английского алфавита с нижним регистром" << endl;
    }

    else if (a >= 'А' && a <= 'Я' || a == 'Ё')
    {
        cout << "\nЭто буква русского алфавита с верхним регистром" << endl;
    }

    else if (a >= 'а' && a <= 'я' || a == 'ё')
    {
        cout << "\nЭто буква русского алфавита с нижним регистром " << endl;
    }

    else {
        cout << "Это знак!!!" << endl;
    }
    return 0;

}