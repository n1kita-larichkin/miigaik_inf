#include <iostream>

using namespace std;

int main()
{
    int year;

    cin >> year;

    if (year % 4 == 0)
    {
        cout << "���������� ���" << endl;
    }
    else
    {
        cout << "������������ ���" << endl;
    }

    return 0;
}