#include <iostream>
using namespace std;
int main()
{
    int num[100][100], num1[100][100], a[100][100];
    int size, i, j, k;
    char ch;
    cout << "enter size : ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "eter the element : ";
            cin >> num[i][j];
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "eter the element : ";
            cin >> num1[i][j];
        }
    }

    cout << " '+'  , '*' " << endl;
    cout << "enter your choice : ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                a[i][j] = num[i][j] + num1[i][j];
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        break;
    case '*':
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    a[i][j] = a[i][j] + (num[i][k] * num1[k][j]);
                }
            }
        }
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        break;

    default:
        cout << "Error..!";
        break;
    }

    return 0;
}