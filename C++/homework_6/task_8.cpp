#include <iostream>

using namespace std;

int main()
{
    int number;
    int count = 0;

    cin >> number;

    for (int i = 1; i < number + 1; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count > 2)
    {
        cout << "����� ���������" << endl;
    }
    else
    {
        cout << "����� �������" << endl;
    }

    return 0;
}