#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251); //��� ������� ����, ������ setlocale(LC_ALL, "rus");
    char a;
    cout << "������� ������: ";
    cin >> a;

    if (a >= '0' && a <= '9')
    {
        cout << "��� �����!!!"<<endl;
    }

    else if (a >= 'A' && a <= 'Z')
    {
        cout << "��� ����� ����������� �������� � ������� ���������"<<endl;
    }

    else if (a >= 'a' && a <= 'z')
    {
        cout << "\n��� ����� ����������� �������� � ������ ���������" << endl;
    }

    else if (a >= '�' && a <= '�' || a == '�')
    {
        cout << "\n��� ����� �������� �������� � ������� ���������" << endl;
    }

    else if (a >= '�' && a <= '�' || a == '�')
    {
        cout << "\n��� ����� �������� �������� � ������ ��������� " << endl;
    }

    else {
        cout << "��� ����!!!" << endl;
    }
    return 0;

}